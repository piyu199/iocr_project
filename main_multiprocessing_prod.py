import os
import shutil
import numpy as np
import pandas as pd
import datetime
import glob
from PyPDF2 import PdfWriter
import ghostscript
from subprocess import Popen, PIPE
from multiprocessing.pool import Pool
from pathlib import Path
import psutil
import PySimpleGUI as psg

import logging as logger
from logging.handlers import RotatingFileHandler

#today.strftime("%Y-%m-%d-%HH_%MM_%SS") + ".log"

def get_today_date_in_string():
    today = datetime.datetime.now()
    return today.strftime("%Y-%m-%d")


def get_batch_id():
    return get_today_date_in_string()


logger.basicConfig(
    handlers=[RotatingFileHandler(f"{get_batch_id()}.log", maxBytes=200000000, backupCount=10)],
    level=logger.INFO,
    format="[%(asctime)s] %(levelname)s [%(name)s.%(funcName)s:%(lineno)d] %(message)s",
    datefmt='%Y-%m-%d %H:%M:%S')

psg.theme("DarkBlue1")

_M_REQUIRED_EXTENTIONS = (".tif", ".tiff", ".TIF", ".TIFF", ".jpg", ".jpeg", ".JPEG", ".png", ".PNG")


def get_all_tiff_files_path(input_dir):
    all_files = []
    for dirpath, dirnames, filenames in os.walk(input_dir):
        for filename in [f for f in filenames if f.endswith(_M_REQUIRED_EXTENTIONS)]:
            all_files.append(os.path.join(dirpath, filename))
    return all_files


def delete_all_non_pdfa_files(output_dir):
    all_files = []
    for dirpath, dirnames, filenames in os.walk(output_dir):
        for filename in [f for f in filenames if f.endswith("_raw_non_pdfa.pdf")]:
            all_files.append(os.path.join(dirpath, filename))

    if all_files:
        for current_pdf in all_files:
            if os.path.isfile(current_pdf):
                try:
                    os.remove(current_pdf)
                except Exception as e:
                    logger.info(f"Exception while deleting PDF file {current_pdf}")
                    logger.info(e)


def generate_core_csv_file(input_dir):
    logger.info("Hit \n \n ")
    # TODO -> Add logging of batch_id. input path and output path
    required_files = get_all_tiff_files_path(input_dir)

    df = pd.DataFrame({"tiffs": required_files})
    df["source_directory"] = df["tiffs"].apply(lambda x: os.path.dirname(x))
    df["tiff_size(MB)"] = df["tiffs"].apply(lambda x: (os.path.getsize(x) / 1024 ** 2)).round(2)
    print(df.shape)
    print(df.columns)
    first_filename = f"{batch_id}.csv"
    print(first_filename)
    try:

        df.to_csv(f"{first_filename}", encoding="utf-8")
    except Exception as e:
        print("EXception ------------ \n \n \n ")
        print(e)

    df = df[["source_directory", "tiffs"]]
    df_group = df.groupby("source_directory", as_index=False).count()
    df_group.columns = ['source_directory', 'tiffs_count']
    # df_group = df[['source_directory', 'tiffs_count']]
    print(df_group.shape)

    print(df_group.columns)

    df_group["destination_directory"] = df_group["source_directory"].apply(lambda x: os.path.dirname(x))
    df_group["destination_directory"] = df_group["destination_directory"].apply(
        lambda x: x.replace(INPUT_DIR, OUTPUT_DIR))
    df_group["output_pdf_name"] = df_group["source_directory"].apply(lambda x: os.path.basename(x))
    final_filename = f"final_{batch_id}.csv"
    df_group.to_csv(final_filename, encoding="utf-8")
    if os.path.exists(first_filename) and os.path.exists(final_filename):
        return first_filename, final_filename
    else:
        return 0, 0


def count_pdfs_in_path(input_path):
    pdfs = glob.glob(f"{input_path}\*.pdf")
    return len(pdfs)


# def command_list(cmd):
#     global command
#     command.append(cmd)


def get_command_of_ocr(source_file_path, destination_file_path, lang):
    source_file_path = r'{}'.format(source_file_path)
    destination_file_path = r'{}'.format(destination_file_path)
    cmd = f"""tesseract -l {lang} -c textonly_pdf=0 "{source_file_path}" "{destination_file_path}" pdf"""
    return cmd

def convert_tif_to_ocr(source_file_path, destination_file_path, lang):
    tif_to_ocr_value = True
    source_file_path = r'{}'.format(source_file_path)
    destination_file_path = r'{}'.format(destination_file_path)
    cmd = f"""tesseract -l {lang} -c textonly_pdf=0 "{source_file_path}" "{destination_file_path}" pdf"""
    logger.info(cmd)
    p = Popen(cmd, shell=True, stdout=PIPE, stderr=PIPE)
    out, err = p.communicate()
    if p.returncode != 0:
        logger.info(out.rstrip())
        logger.info(err.rstrip())
        tif_to_ocr_value = False
    else:
        logger.info("Command ran successfully")
    return tif_to_ocr_value,cmd


def get_folder_size_in_gb(folder: str) -> int:
    return sum(p.stat().st_size for p in Path(folder).rglob('*')) / (1024 ** 3)



def only_get_command_excel(df, df_group, ocr_lang):
    all_ocr_commands = []
    logger.info(f"processing all steps, df_group.shape:{df_group.shape},  PID{os.getpid()}")
    logger.info(f"Subset : {df_group.shape}")
    for row in df_group.itertuples():
        source_directory = row.source_directory
        tiffs_count = row.tiffs_count
        destination_directory = row.destination_directory
        output_pdf_name = row.output_pdf_name
        df_process = df.loc[df["source_directory"] == source_directory]
        logger.info(f"source_directory : {source_directory}, {df_process.shape}")
        temp_path = os.path.join(destination_directory, f"cmt_bin_{output_pdf_name}")
        os.makedirs(temp_path, exist_ok=True)
        all_tiffs = df_process["tiffs"].tolist()
        for current_tiff in all_tiffs:
            single_pdf_path = os.path.join(temp_path, os.path.basename(current_tiff).split(".")[0])
            command_ocr = get_command_of_ocr(current_tiff, single_pdf_path, ocr_lang)
            all_ocr_commands.append(command_ocr)
            # convert_success = True
            convert_success = convert_tif_to_ocr(current_tiff, single_pdf_path, ocr_lang)
            if convert_success:
                logger.info(f"OCR extraction is done for file: {current_tiff}")
            else:
                break
        
        df1=pd.DataFrame({"command":all_ocr_commands})
        df1.to_csv("command_list_tiff1.csv")
        # Check if all tifs are converted for a single folder
        pdfs_created = count_pdfs_in_path(temp_path)
        if tiffs_count == pdfs_created:
            # Merge PDF to parent folder
            combined_pdf_path = os.path.join(destination_directory, f"{output_pdf_name}_raw_non_pdfa.pdf")
            if combine_pdf(temp_path, combined_pdf_path):
                # double check
                if os.path.exists(combined_pdf_path):
                    convert_pdf_to_pdfa(combined_pdf_path, combined_pdf_path.replace("_raw_non_pdfa.pdf", ".pdf"))

            # remove temp files
            if os.path.exists(temp_path):
                shutil.rmtree(temp_path)
    return True

def process_all_steps(df, df_group, process_number, total_processes, subsets, ocr_lang):
    all_ocr_commands = []
    logger.info(f"processing all steps, df_group.shape:{df_group.shape},  PID{os.getpid()}")
    min_number = subsets[process_number - 1]
    max_number = subsets[process_number]
    logger.info(
        f"Inside **** \n \n  process_number:{process_number}, total_processes:{total_processes}, subsets:{subsets}, min:{min_number}, max:{max_number}")
    df_group = df_group.iloc[min_number:max_number]
    logger.info(f"Subset : {df_group.shape}")
    for row in df_group.itertuples():
        source_directory = row.source_directory
        tiffs_count = row.tiffs_count
        destination_directory = row.destination_directory
        output_pdf_name = row.output_pdf_name
        df_process = df.loc[df["source_directory"] == source_directory]
        logger.info(f"source_directory : {source_directory}, {df_process.shape}")
        temp_path = os.path.join(destination_directory, f"cmt_bin_{output_pdf_name}")
        os.makedirs(temp_path, exist_ok=True)
        all_tiffs = df_process["tiffs"].tolist()
        for current_tiff in all_tiffs:
            single_pdf_path = os.path.join(temp_path, os.path.basename(current_tiff).split(".")[0])
            command_ocr = get_command_of_ocr(current_tiff, single_pdf_path, ocr_lang)
            all_ocr_commands.append(command_ocr)
            # convert_success = True
            convert_success = convert_tif_to_ocr(current_tiff, single_pdf_path, ocr_lang)
            if convert_success:
                logger.info(f"OCR extraction is done for file: {current_tiff}")
            else:
                break
        
        df1=pd.DataFrame({"command":all_ocr_commands})
        df1.to_excel("command_list_tiff1.xlsx",engine='xlsxwriter')
        # Check if all tifs are converted for a single folder
        pdfs_created = count_pdfs_in_path(temp_path)
        if tiffs_count == pdfs_created:
            # Merge PDF to parent folder
            combined_pdf_path = os.path.join(destination_directory, f"{output_pdf_name}_raw_non_pdfa.pdf")
            if combine_pdf(temp_path, combined_pdf_path):
                # double check
                if os.path.exists(combined_pdf_path):
                    convert_pdf_to_pdfa(combined_pdf_path, combined_pdf_path.replace("_raw_non_pdfa.pdf", ".pdf"))

            # remove temp files
            if os.path.exists(temp_path):
                shutil.rmtree(temp_path)
    return True


def get_no_of_process(df_group):  # np.linspace(0,1000,4)
    total_unique_folders = df_group.shape[0]
    no_of_process = 5 if total_unique_folders >= 10 else 4 if total_unique_folders >= 8 else 3 if total_unique_folders >= 3 else 2 if total_unique_folders >= 2 else 1
    return no_of_process


def get_hardware_information():
    return {"CPU(Physical)": psutil.cpu_count(logical=False),
            "CPU(Logical)": psutil.cpu_count(),
            "RAM(Physical)": f"{psutil.virtual_memory().total / (1024 ** 3):.2f} GB"}



def split_work_in_processes(df_group_shape, no_of_workers):
    splits = np.linspace(0, df_group_shape, no_of_workers + 1)
    subsets = [int(x) for x in splits]
    print(f"df_group_shape:{df_group_shape}, no_of_workers:{no_of_workers}")
    return subsets

def process_temp_ocr(ocr_lang,core):
    first_filename, final_filename = generate_core_csv_file(INPUT_DIR)
    if first_filename and final_filename:
        logger.info(f"-> -> final_filename = {final_filename}")
        df = pd.read_csv(first_filename)  # Columns -> tiffs, source_directory
        df_group = pd.read_csv(final_filename)
        only_get_command_excel(df,df_group,ocr_lang)
        no_of_workers = int(core) 
        # splits = np.linspace(0, df_group.shape[0], no_of_workers + 1)
        df_group_shape=pd.read_csv("command_list_tiff1.csv")
        subsets = split_work_in_processes(df_group_shape.shape[0], no_of_workers)
        pool = Pool(no_of_workers)
        workers = [pool.apply_async(process_all_steps,
                                    args=(df.copy(), df_group.copy(), i, no_of_workers, subsets, ocr_lang)) for i in
                   range(1, no_of_workers + 1)]
        for w in workers:
            logger.info("Getting Worker")
            w.get()

def combine_pdf(input_dir, output_file_path):
    pdfs = glob.glob(f"{input_dir}\*.pdf")
    merger = PdfWriter()
    if pdfs:
        for pdf in pdfs:
            try:
                if os.path.exists(pdf):
                    merger.append(pdf)
                else:
                    logger.info(f"Pdf file does not exist {pdf}")
            except Exception as e:
                logger.info("Exception occurred")
                logger.info(e)
    else:
        logger.info(f"No files to merge in {input_dir}")
    try:
        merger.write(output_file_path)
    except Exception as e:
        return False
    return True


def convert_pdf_to_pdfa(source_file, destination_file):
    ret_val = True
    logger.info("Converting to PDFA")

    ghost_script_command = ['gswin64', '-dPDFA', '-dBATCH', '-dNOPAUSE', '-dAutoRotatePages=/None',
                            '-sColorConversionStrategy=UseDeviceIndependentColor', '-sDEVICE=pdfwrite',
                            '-dPDFACompatibilityPolicy=2', f'-sOutputFile={destination_file}', source_file]

    try:
        ghostscript.Ghostscript(*ghost_script_command)
        logger.info("PDFA:Generated")
    except Exception as e:
        logger.error(f"Error:source_file : {source_file}, destination_file: {destination_file}")
        logger.error(f"Error: {e}")
        ret_val = False
    return ret_val


if __name__ == '__main__': 
    batch_id = get_batch_id()
    hardware_info = get_hardware_information()
    is_okay_to_proceed = 0
    psg.set_options(font=('Arial', 13))
    hardware_string = f"""CPU:{hardware_info["CPU(Physical)"]}, CPU(Logical):{hardware_info["CPU(Logical)"]}, RAM: {hardware_info["RAM(Physical)"]} \n"""
    layout = [
        [psg.Text(text='OCR made easy', size=20, expand_x=True, justification='center')],
        [psg.Image('logo.png', expand_x=True, expand_y=True)],
        [psg.Text(text='Detected Hardware', size=20, expand_x=True, justification='left', text_color="Green")],
        [psg.Text(text=hardware_string, size=5, expand_x=True, justification='left')],
        [psg.Text(text='Please provide input to run OCR model', size=20, expand_x=True, justification='left',
                  text_color="Green")],
        [psg.Text(text='Source Folder', size=(20, 1)), psg.InputText("D:\Input")],
        [psg.Text(text='Output Folder', size=(20, 1)), psg.InputText("D:\Output")],
        [psg.Text(text='Language', size=(20, 1)), psg.InputText("eng")],
        [psg.Text(text='Core', size=(20, 1)), psg.InputText("")],
        [psg.Text('_' * 200, size=(100, 1))],
        [psg.Button('Run OCR Model')],
        [psg.Text(key='processing', text_color='green', justification='center')]
    ]  # identify the multiline via key option

    # Create the Window
    window = psg.Window('Intelligent OCR', layout, size=(800, 400), keep_on_top=True)
    
    # Event Loop to process "events" and get the "values" of the inputs
    while True:
        event, values = window.read()
        # logger.info(event, values)
        if event in (None, 'Close Window'):  # if user closes window or clicks cancel
            break
        if event in ["Run OCR Model"]:
            window['processing'].update("")
            INPUT_DIR = values[1].strip()
            OUTPUT_DIR = values[2].strip()
            OCR_LANG = values[3].strip()
            core= values[4].strip()
            if int(core) > 4:
                psg.popup(f'Cannot Use more then 4 core')
                break
            if os.path.exists(INPUT_DIR) and os.path.exists(OUTPUT_DIR):
                if len(OCR_LANG) != 0:
                    start_time = datetime.datetime.now()
                    logger.info(f"Started at {start_time}")
                    logger.info(f"Input Dir: {INPUT_DIR}, Output Dir:{OUTPUT_DIR}")
                    source_dir_size = get_folder_size_in_gb(INPUT_DIR)
                    destination_dir_free_space = psutil.disk_usage(OUTPUT_DIR).free / (1024 ** 3)
                    is_okay_to_proceed = True if destination_dir_free_space > (source_dir_size // 2) else False
                    if is_okay_to_proceed:
                        window['processing'].update("Running OCR Model ..... ")
                        #process_ocr(OCR_LANG)
                        process_temp_ocr(OCR_LANG,core)
                        logger.info("Finished OCR Extraction, deleting all non pdfa files ...............")
                        delete_all_non_pdfa_files(OUTPUT_DIR)
                        logger.info("Completed OCR...............")
                        end_time = datetime.datetime.now()
                        window['processing'].update(
                            f"Finished OCR  of {source_dir_size :.2f} GB, Total Time Taken {end_time - start_time}")
                        logger.info(f"Time Taken: {end_time - start_time}")
                        print(f"Time Taken: {end_time - start_time}")
                    else:
                        window['processing'].update("Please check if there is enough space in destination path")
                else:
                    window['processing'].update("Language is not provided")
            else:
                window['processing'].update(
                    f"Please check if directory  {INPUT_DIR}, and {OUTPUT_DIR}  exist ..... ")
    window.close()
