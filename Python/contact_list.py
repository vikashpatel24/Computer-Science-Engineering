#!/usr/bin/env python3

import tkinter as tk
from tkinter import ttk

class AddressBookApp(tk.Frame):
    def __init__(self, master=None):
        super().__init__(master)
        self.master.title('Address Book')
        self.pack()
        self._create_widgets()

    def _create_widgets(self):
        tree_view_entries = ["Entry 1", "Entry 2",
                   "Entry 3", "Entry 4"]
        treeview_widget = ttk.Treeview(self.master)
        index = 1
        for entry in tree_view_entries:
            treeview_widget.insert('', 'end', index, text = entry)
            index += 1 
        treeview_widget.pack()
        self._create_menus()

    
    def _create_menus(self):
        menu_widget = tk.Menu(self.master)
        file_menu = tk.Menu(menu_widget)
        contact_menu  = tk.Menu(menu_widget)
        file_menu.add_command(label="New", command=self._new_addressbook)
        file_menu.add_command(label="Open...", command=self._open_addressbook)
        file_menu.add_separator()
        file_menu.add_command(label="Exit", command=root.quit)
        contact_menu.add_command(label="Add Contact", command=self._add_contact)

        contact_menu.add_command(label="Remove Contact", command=self._remove_contact)
        menu_widget.add_cascade(label="File", menu=file_menu)
        menu_widget.add_cascade(label="Contact", menu=contact_menu)

        self.master.config(menu=menu_widget)
    
    def _new_addressbook(self):
        pass
    
    def _open_addressbook(self):
        pass
    
    def _add_contact(self):
        pass
    
    def _remove_contact(self):
        pass


# Main entry point
root = tk.Tk()
app = AddressBookApp(master=root)
app.mainloop()
