import aspose.pdf as ap


# Load the PDF document
document = ap.Document(r"C:\Users\Admin\Desktop\Non_replaced_pdf\09_IN27IB220665175.pdf")

# Instantiate a TextFragmentAbsorber object
txtAbsorber = ap.text.TextFragmentAbsorber("IN27IB220665175")

# Search text
document.pages.accept(txtAbsorber)

# Get reference to the found text fragments
textFragmentCollection = txtAbsorber.text_fragments

# Parse all the searched text fragments and replace text
for txtFragment in textFragmentCollection:
    txtFragment.text = "IN0123456789"

# Save the updated PDF
document.save(r"C:\Users\Admin\Desktop\Replaced_pdf\output1.pdf")