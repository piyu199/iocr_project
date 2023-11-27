import os
import pandas as pd
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
from PIL import Image
import logging as logger
from logging.handlers import RotatingFileHandler
import pkg_resources
import base64
import image_data
import io


def get_all_pdf_files_path(INPUT_DIR):
    _M_REQUIRED_EXTENTIONS = (".pdf")
    all_files = []
    for dirpath, dirnames, filenames in os.walk(INPUT_DIR):
        for filename in [f for f in filenames if f.endswith(_M_REQUIRED_EXTENTIONS)]:
            all_files.append(os.path.join(dirpath, filename))
    return all_files


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


input_DIR=r"C:\\Users\\Admin\\Desktop\\In"
output_dir=r"C:\\Users\\Admin\\Desktop\\out"
print(get_all_pdf_files_path(input_DIR))
for i in get_all_pdf_files_path(input_DIR):
    destination=os.path.basename(i)
    destination_file=os.path.join(output_dir,destination)
    convert_pdf_to_pdfa(source_file=i,destination_file=destination_file)