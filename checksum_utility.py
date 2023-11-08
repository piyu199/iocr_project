import hashlib
import os
import pandas as pd


def generate_md5_hash(filePath):
    md5 = hashlib.md5() #
    with open(filePath,'rb') as file:
        contents = file.read()
        md5.update(contents)
        return md5.hexdigest()
    
def generate_sha512_hash(filePath):
    sha512 = hashlib.sha512() #
    with open(filePath,'rb') as file:
        contents = file.read()
        sha512.update(contents)
        return sha512.hexdigest()


def get_all_files_path(INPUT_DIR):
    _M_REQUIRED_EXTENTIONS = (".tif", ".tiff", ".TIF",
                              ".TIFF", ".jpg", ".jpeg", ".JPEG", ".png", ".PNG",".pdf",".PDF")
    all_files = []
    file_name=[]
    for dirpath, dirnames, filenames in os.walk(INPUT_DIR):
        for filename in [f for f in filenames if f.endswith(_M_REQUIRED_EXTENTIONS)]:
            all_files.append(os.path.join(dirpath, filename))
            file_name.append(filename)
    return {"Path":all_files,"Filename":file_name}

if __name__ == "__main__":
    INPUT_DIR=r"C:\\dev\\projects\\git\\i_ocr\\src\\CHECKSUM 256BIT"
    df=pd.DataFrame(get_all_files_path(INPUT_DIR))
    df["SHA512"]=df["Path"].apply(lambda x:generate_sha512_hash(x))
    df["count_SHA512"]=df["SHA512"].apply(lambda x:len(x))
    df["MD5"]=df["Path"].apply(lambda x:generate_md5_hash(x))
    df["count_MD5"]=df["MD5"].apply(lambda x:len(x))
    df["File_size(MB)"] = df["Path"].apply(lambda x: (os.path.getsize(x) / 1024 ** 2)).round(2)
    print(df)
    df.to_csv("checksum.csv",encoding="utf-8")

