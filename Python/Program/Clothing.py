from Product import Product

class Clothing(Product):
    def __init__(self):
        # Memanggil konstruktor kelas induk (Product)
        super().__init__()
        
        # Inisialisasi atribut kelas Clothing
        self.size = ""
        self.material = ""
        self.gender = ""

    def set_size(self, size):
        # Metode untuk mengatur ukuran pakaian
        self.size = size

    def set_gender(self, gender):
        # Metode untuk mengatur jenis kelamin pakaian
        self.gender = gender

    def set_material(self, material):
        # Metode untuk mengatur material pakaian
        self.material = material

    def get_size(self):
        # Metode untuk mendapatkan ukuran pakaian
        return self.size

    def get_material(self):
        # Metode untuk mendapatkan material pakaian
        return self.material

    def get_gender(self):
        # Metode untuk mendapatkan jenis kelamin pakaian
        return self.gender

    def __del__(self):
        pass  # Destruktor untuk membersihkan objek (tidak melakukan apa pun dalam kasus ini)
