from tkinter.constants import BOTH, END, X, Y
import  pywhatkit
import tkinter as tk
from tkinter import StringVar, messagebox



class HandWriting:
    
    def __init__(self):
        self.root = tk.Tk()
        
        self.root.title("Text to HandWriting Converter")
        
        self.root.geometry("1500x750")
        
        self.user_input = tk.Text(self.root,font=(50))
        self.user_input.pack(expand=True)
        
        self.button = tk.Button(self.root,text="Convert",command=self.submit)
        self.button.place(x=1000,y=600)
        
        
        
        self.root.mainloop()
    
    def submit(self):
        
        pywhatkit.text_to_handwriting(self.user_input.get("1.0",END),rgb=[0,0,255])
        messagebox.showinfo("Done","text has been converted")
        
        
        
HandWriting()
        