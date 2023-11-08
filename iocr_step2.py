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



def count_pdfs_in_path(input_path):
    pdfs = glob.glob(f"{input_path}\*.pdf")
    return len(pdfs)

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
    # batch_id=get_batch_id() 
    file_name=r"c:\dev\projects\git\i_ocr\src\final_2023-07-31.csv"
    df=pd.read_csv(file_name)
    OUTPUT_DIR=df["destination_directory"][0]
    for row in df.itertuples():
        tiff_count=row.tiffs_count
        temp_path=os.path.join(f"{row.destination_directory}\cmt_bin_{row.output_pdf_name}")
        pdfs_created = count_pdfs_in_path(temp_path)
        if tiff_count == pdfs_created:
            combined_pdf_path = os.path.join(row.destination_directory, f"{row.output_pdf_name}_raw_non_pdfa.pdf")
            print(combined_pdf_path)
            if combine_pdf(temp_path, combined_pdf_path):
                if os.path.exists(combined_pdf_path):
                    convert_pdf_to_pdfa(combined_pdf_path, combined_pdf_path.replace("_raw_non_pdfa.pdf", ".pdf"))

            # remove temp files    #testing 2023-07-19
            # if os.path.exists(temp_path):
            #     shutil.rmtree(temp_path)
    delete_all_non_pdfa_files(OUTPUT_DIR)
    print("Process Completed")










# # import pandas as pd
# # from PIL import Image 
# # import datetime

# # def convert_tiff_to_image(FILE_NAME):
# #     im = Image.open(FILE_NAME)
# #     OUTPUT_FILE_NAME=FILE_NAME.replace(".tif",".jpeg")
# #     im.save(OUTPUT_FILE_NAME)


# # df=pd.read_csv("2023-07-18.csv")
# # start_time = datetime.datetime.now()
# # print(start_time)
# # for row in df.itertuples():
# #     print(row.tiffs)
# #     convert_tiff_to_image(FILE_NAME=f"{row.tiffs}")
# # end_time = datetime.datetime.now()
# # print(end_time)
# # print(f"Time Taken: {end_time - start_time}")