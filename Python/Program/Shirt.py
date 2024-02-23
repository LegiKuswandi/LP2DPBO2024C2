from Clothing import Clothing

class Shirt(Clothing):
    def __init__(self):
        # Memanggil konstruktor kelas induk (Clothing)
        super().__init__()
        
        # Inisialisasi atribut kelas Shirt
        self.color = ""
        self.sleeve_type = ""

    def set_sleeve_type(self, sleeve_type):
        # Metode untuk mengatur jenis lengan baju
        self.sleeve_type = sleeve_type

    def set_color(self, color):
        # Metode untuk mengatur warna baju
        self.color = color

    def get_color(self):
        # Metode untuk mendapatkan warna baju
        return self.color

    def get_sleeve_type(self):
        # Metode untuk mendapatkan jenis lengan baju
        return self.sleeve_type

    def __del__(self):
        pass  # Destruktor untuk membersihkan objek (tidak melakukan apa pun dalam kasus ini)
