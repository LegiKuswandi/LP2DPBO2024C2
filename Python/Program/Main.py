# Saya Legi Kuswandi mengerjakan LP2 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang 
# telah dispesifikasikan. Aamiin.

from Shirt import Shirt

def main():
    # Deklarasi list untuk menyimpan data pakaian
    list_shirts = []

    # Memasukkan data pakaian ke dalam list
    for i in range(3):
        idProduct = input("Masukkan IDProduct: ")
        name = input("Masukkan Nama: ")
        brand = input("Masukkan Brand: ")
        price = input("Masukkan Price: ")
        size = input("Masukkan Size: ")
        material = input("Masukkan Material: ")
        gender = input("Masukkan Gender: ")
        color = input("Masukkan Color: ")
        sleeve_type = input("Masukkan Sleeve Type: ")

        # Membuat objek Shirt dan menambahkannya ke dalam list
        shirt = Shirt()
        shirt.set_idProduct(idProduct)
        shirt.set_name(name)
        shirt.set_brand(brand)
        shirt.set_price(price)
        shirt.set_size(size)
        shirt.set_material(material)
        shirt.set_gender(gender)
        shirt.set_color(color)
        shirt.set_sleeve_type(sleeve_type)

        list_shirts.append(shirt)

        print("Data Berhasil ditambahkan horeee\n")

   # Menghitung panjang maksimum untuk setiap kolom dalam tabel
    max_lengths = {
        "IDP": 6,
        "Nama": 7,
        "Brand": 6,
        "Price": 8,
        "Size": 5,
        "Material": 8,
        "Gender": 8,
        "Color": 8,
        "Sleeve Type": 12
    }

    for shirt in list_shirts:
        max_lengths["IDP"] = max(max_lengths["IDP"], len(shirt.get_idProduct()))
        max_lengths["Nama"] = max(max_lengths["Nama"], len(shirt.get_name()))
        max_lengths["Brand"] = max(max_lengths["Brand"], len(shirt.get_brand()))
        max_lengths["Price"] = max(max_lengths["Price"], len(shirt.get_price()))
        max_lengths["Size"] = max(max_lengths["Size"], len(shirt.get_size()))
        max_lengths["Material"] = max(max_lengths["Material"], len(shirt.get_material()))
        max_lengths["Gender"] = max(max_lengths["Gender"], len(shirt.get_gender()))
        max_lengths["Color"] = max(max_lengths["Color"], len(shirt.get_color()))
        max_lengths["Sleeve Type"] = max(max_lengths["Sleeve Type"], len(shirt.get_sleeve_type()))

    # Menampilkan header tabel
    header_format = "| {:<" + str(max_lengths["IDP"]) + "} | {:<" + str(max_lengths["Nama"]) + "} | {:<" + str(max_lengths["Brand"]) + "} | {:<" + str(max_lengths["Price"]) + "} | {:<" + str(max_lengths["Size"]) + "} | {:<" + str(max_lengths["Material"]) + "} | {:<" + str(max_lengths["Gender"]) + "} | {:<" + str(max_lengths["Color"]) + "} | {:<" + str(max_lengths["Sleeve Type"]) + "} |"
    print("+" + "-" * (sum(max_lengths.values()) + len(max_lengths) * 3 - 1) + "+")
    print(header_format.format("IDP", "Nama", "Brand", "Price", "Size", "Material", "Gender", "Color", "Sleeve Type"))
    print("+" + "-" * (sum(max_lengths.values()) + len(max_lengths) * 3 - 1) + "+")

    # Menampilkan data pakaian dalam bentuk tabel
    for shirt in list_shirts:
        print(header_format.format(shirt.get_idProduct(), shirt.get_name(), shirt.get_brand(), shirt.get_price(), shirt.get_size(), shirt.get_material(), shirt.get_gender(), shirt.get_color(), shirt.get_sleeve_type()))

    # Menampilkan garis penutup tabel
    print("+" + "-" * (sum(max_lengths.values()) + len(max_lengths) * 3 - 1) + "+")

if __name__ == "__main__":
    main()