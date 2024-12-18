import tkinter as tk
from tkinter import messagebox

class JocTrivia:
    def __init__(self, master):
        self.master = master
        self.master.title("Joc de Trivia")
        self.master.geometry("500x400")
        
        self.intrebari = [
            {
                "intrebare": "Care este capitala Frantei?",
                "optiuni": ["Paris", "Roma", "Madrid", "Berlin"],
                "raspuns": 0
            },
            {
                "intrebare": "Rezultatul calculului 5 + 7 este?",
                "optiuni": ["10", "15", "23", "12"],
                "raspuns": 3
            },
            {
                "intrebare": "Cine a fost primul presedinte al Statelor Unite ale Americii?",
                "optiuni": ["Klaus Iohannis", "Thomas Jefferson", "George Washington", "Joe Biden"],
                "raspuns": 2
            },
            {
                "intrebare": "Cate oase are corpul uman?",
                "optiuni": ["102", "206", "1754", "312"],
                "raspuns": 1
            },
            {
                "intrebare": "In ce an a avut loc Primul Razboi Mondial?",
                "optiuni": ["1900", "1903", "1914", "1920"],
                "raspuns": 2
            }
        ]
        
        self.index_curent = 0
        self.scor = 0
        
        self.intrebare_label = tk.Label(master, text="", font=("Arial", 14), wraplength=450, justify="center")
        self.intrebare_label.pack(pady=20)
        
        self.var_raspuns = tk.IntVar()
        self.raspunsuri_butoane = []
        for i in range(4):
            buton = tk.Radiobutton(master, text="", variable=self.var_raspuns, value=i, font=("Arial", 12))
            self.raspunsuri_butoane.append(buton)
            buton.pack(anchor="w", padx=50)
        
        self.buton_next = tk.Button(master, text="Raspunde", command=self.verifica_raspuns, font=("Arial", 12))
        self.buton_next.pack(pady=20)
        
        self.afiseaza_intrebare()
    
    def afiseaza_intrebare(self):
        if self.index_curent < len(self.intrebari):
            intrebare = self.intrebari[self.index_curent]
            self.intrebare_label.config(text=intrebare["intrebare"])
            self.var_raspuns.set(-1)
            for i, text in enumerate(intrebare["optiuni"]):
                self.raspunsuri_butoane[i].config(text=f"{i + 1}. {text}")
        else:
            self.afiseaza_rezultat_final()
    
    def verifica_raspuns(self):
        raspuns_selectat = self.var_raspuns.get()
        if raspuns_selectat == -1:
            messagebox.showwarning("Atentie", "Te rog sa selectezi un raspuns!")
            return
        
        raspuns_corect = self.intrebari[self.index_curent]["raspuns"]
        if raspuns_selectat == raspuns_corect:
            self.scor += 1
        
        self.index_curent += 1
        self.afiseaza_intrebare()
    
    def afiseaza_rezultat_final(self):
        messagebox.showinfo("Rezultat Final", f"Joc terminat! Ai raspuns corect la {self.scor} din {len(self.intrebari)} intrebari!")
        self.master.quit()

root = tk.Tk()
app = JocTrivia(root)
root.mainloop()
