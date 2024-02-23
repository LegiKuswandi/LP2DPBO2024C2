class Product:
    def __init__(self):
        # Inisialisasi atribut
        self.idProduct = ""
        self.name = ""
        self.brand = ""
        self.price = ""

    def set_idProduct(self, idProduct):
        # Metode untuk mengatur ID produk
        self.idProduct = idProduct

    def set_brand(self, brand):
        # Metode untuk mengatur merek produk
        self.brand = brand

    def set_name(self, name):
        # Metode untuk mengatur nama produk
        self.name = name

    def set_price(self, price):
        # Metode untuk mengatur harga produk
        self.price = price

    def get_brand(self):
        # Metode untuk mendapatkan merek produk
        return self.brand

    def get_idProduct(self):
        # Metode untuk mendapatkan ID produk
        return self.idProduct

    def get_name(self):
        # Metode untuk mendapatkan nama produk
        return self.name

    def get_price(self):
        # Metode untuk mendapatkan harga produk
        return self.price

    def __del__(self):
        pass  # Destruktor untuk membersihkan objek (tidak melakukan apa pun dalam kasus ini)
