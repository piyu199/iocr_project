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



def combine_pdf(input_dir, output_file_path):
    pdfs = glob.glob(f"{input_dir}\*.pdf")
    print(pdfs)
    merger = PdfWriter()
    if pdfs:
        for pdf in pdfs:
            print(f"Current PDF is {pdf}")
            try:

                if os.path.exists(pdf):
                    print("PDF exists")
                    merger.append(pdf)
                else:
                    print("PDF Does not exists")
                    logger.info(f"Pdf file does not exist {pdf}")
            except Exception as e:
                logger.info("Exception occurred")
                logger.info(e)
    else:
        logger.info(f"No files to merge in {input_dir}")
    try:
        print(output_file_path)
        merger.write(output_file_path)
        merger.close()
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



input_dir=r"C:\\Users\\Admin\\Desktop\\RR_HW_INDEXNO_3_1798-1798_table_extraction"
output_file_path=r"C:\\dev\\pdf_output\\RR_HW_INDEXNO_3_1798-1798_table_extraction.pdf"
# print(count_pdfs_in_path(input_dir))
# combine_pdf(input_dir,output_file_path)

source_file=r"C:\\dev\\pdf_output\\RR_HW_INDEXNO_3_1798-1798_table_extraction.pdf"
destination_file="C:\\dev\\pdf_output\\RR_HW_INDEXNO_3_1798-1798_table_extraction_pdfa.pdf"
convert_pdf_to_pdfa(source_file,destination_file)