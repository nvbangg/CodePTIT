import openpyxl
from tkinter import *
from tkinter import messagebox


def register():
    # Get the user input from the form
    first_name = first_name_entry.get()
    Last_name = Last_name_entry.get()
    email = email_entry.get()
    Mobile = Mobile_entry.get()

    # Create a new row with the user input
    new_row = [first_name, Last_name, email, Mobile]

    # Append the new row to the Excel sheet
    workbook = openpyxl.load_workbook("registration_data.xlsx")
    sheet = workbook.active
    sheet.append(new_row)
    workbook.save("registration_data.xlsx")
    messagebox.showinfo("Success", "Registration successful!")


# Create the main tkinter window
root = Tk()
root.title("Registration Form")
root.geometry('300x300')

# Create labels and entry fields for each input
first_name_label = Label(root, text="First Name:")
first_name_label.pack()
first_name_entry = Entry(root)
first_name_entry.pack()

Last_name_label = Label(root, text="Last Name:")
Last_name_label.pack()
Last_name_entry = Entry(root)
Last_name_entry.pack()

email_label = Label(root, text="Email:")
email_label.pack()
email_entry = Entry(root)
email_entry.pack()

Mobile_label = Label(root, text="Mobile:")
Mobile_label.pack()
Mobile_entry = Entry(root)
Mobile_entry.pack()

register_button = Button(root, text="Register", command=register)
register_button.pack()

root.mainloop()