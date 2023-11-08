import base64

with open('logo.png','rb') as image_file:
    image_base64 = base64.b64encode(image_file.read()).decode('utf-8')

with open('image_data.py', 'w') as image_data_file:
    image_data_file.write(f'image_base64 = "{image_base64}"')
