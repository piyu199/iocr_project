import os
from PIL import Image
import pathlib


def compress_pdf_to_size(input_file_path, output_file_path):
    # Load the original image
    with Image.open(input_file_path) as img:
        # Set the initial JPEG quality
        quality = 95

        # Convert to RGB mode to avoid transparency issues
        img = img.convert("RGB")

        # Start compressing the image while checking the file size
        while True:
            dpi=img.info.get("dpi",(300,300))

            # Save the image with the current quality setting
            img.save(output_file_path, "PDF", dpi=dpi, quality=quality)

            # Get the size of the saved image
            # saved_file_size = os.path.getsize(output_file_path)

            # Check if the size is within the target range
            # if saved_file_size <= target_file_size_mb * 1024 * 1024:
            #     break

            # Reduce the quality for the next iteration
            quality -= 5

            # Break the loop if the quality becomes too low
            if quality <= 5:
                break


def make_file_pdf(src_directory, dest_directory):
    # Create the destination directory if it doesn't exist
    os.makedirs(dest_directory, exist_ok=True)

    # Walk through the source directory to get all subdirectories
    for root, dirs, files in os.walk(src_directory):
        # Skip the root directory itself (abc in this case)
        if root == src_directory:
            # Create the corresponding subdirectory in the destination directory
            relative_path = os.path.relpath(root, src_directory)
            dest_subdirectory = os.path.join(dest_directory, relative_path)
            os.makedirs(dest_subdirectory, exist_ok=True)

            # Copy all files in the current subdirectory to the destination
            for file in files:
                file_extension=pathlib.Path(file).suffix
                print(file_extension)
                # print(type(file_extension))
                src_file_path = os.path.join(root, file)
                dest_file_path = os.path.join(dest_subdirectory, file).replace(file_extension, ".pdf")
                print(dest_file_path)
                compress_pdf_to_size(src_file_path, dest_file_path)
                
        

if __name__=='__main__' :
    INPUT_DIR=r"C:\dev\projects\git\generate_searchable_pdf\src\Input_Prajesh"
    OUTPUT_DIR=r"C:\dev\projects\git\generate_searchable_pdf\src\Output_Prajesh"
    make_file_pdf(INPUT_DIR,OUTPUT_DIR)
    print("Process Done")

