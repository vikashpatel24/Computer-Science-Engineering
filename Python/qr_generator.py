from tkinter import *
from tkinter import messagebox
import pyqrcode

ws = Tk()
ws.title("QR CODE GENERATOR")
ws.config(bg = '#D2F2F2')

def generate_QR():
    if len(user_input.get()) != 0:
        global qr, img
        qr = pyqrcode.create(user_input.get())
        img = BitmapImage(data = qr.xbm(scale = 10))
    else:
        messagebox.showwarning('warning', 'All Fields are Required!')
    try:
        display_code()
    except:
        pass

def display_code():
    img_lbl.config(image = img)
    output.config(text = "SUCCESSFULLY GENERATED the QR code of: " + user_input.get())


lbl = Label(
    ws,
    text = "Enter Any String To generate Unique QR: ",
    bg = '#D2F2F2'
)
lbl.pack()

user_input = StringVar()
entry = Entry(
    ws,
    textvariable = user_input
)
entry.pack(padx=20)

button = Button(
    ws,
    text = "CLICK TO GENERATE",
    width = 25,
    command = generate_QR
)
button.pack(pady = 30)

img_lbl = Label(
    ws,
    bg = '#D2F2F2')
img_lbl.pack()
output = Label(
    ws,
    text = "",
    bg = '#D2F2F2'
)
output.pack()

ws.mainloop()
