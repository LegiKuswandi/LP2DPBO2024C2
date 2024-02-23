/*Saya Legi Kuswandi mengerjakan LP2 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang 
telah dispesifikasikan. Aamiin.*/

#include <iostream>
#include <vector>
#include <iomanip>
#include "Shirt.cpp"

int main() {
    // Deklarasi vektor untuk menyimpan data pakaian
    vector<Shirt> list;

    // Memasukkan data pakaian ke dalam vektor
    for (int i = 0; i < 3; i++) {
        string idProduct, name, brand, price, size, material, gender, color, sleeve_type;

        cout << "Masukkan IDProduct: ";
        cin >> idProduct;
        cout << "Masukkan Nama: ";
        cin >> name;
        cout << "Masukkan Brand: ";
        cin >> brand;
        cout << "Masukkan Price: ";
        cin >> price;
        cout << "Masukkan Size: ";
        cin >> size;
        cout << "Masukkan Material: ";
        cin >> material;
        cout << "Masukkan Gender: ";
        cin >> gender;
        cout << "Masukkan Color: ";
        cin >> color;
        cout << "Masukkan Sleeve Type: ";
        cin >> sleeve_type;

        // Membuat objek Shirt dan menambahkannya ke dalam vektor
        Shirt Tshirt;
        Tshirt.setIdProduct(idProduct);
        Tshirt.setName(name);
        Tshirt.setBrand(brand);
        Tshirt.setPrice(price);
        Tshirt.setSize(size);
        Tshirt.setMaterial(material);
        Tshirt.setGender(gender);
        Tshirt.setColor(color);
        Tshirt.setSleeve_type(sleeve_type);

        list.push_back(Tshirt);

        cout << "Data Berhasil ditambahkan horeee" << endl << endl;
    }

    // Menghitung panjang maksimum untuk setiap kolom dalam tabel
    int max_id_length = 8; 
    int max_name_length = 8; 
    int max_brand_length = 9; 
    int max_price_length = 10;
    int max_size_length = 7; 
    int max_material_length = 9; 
    int max_gender_length = 10; 
    int max_color_length = 10; 
    int max_sleeve_type_length = 12; 

    // Menemukan panjang maksimum untuk setiap kolom
    for (Shirt shirt : list) {
        max_id_length = max(max_id_length, static_cast<int>(shirt.getIdProduct().length()));
        max_name_length = max(max_name_length, static_cast<int>(shirt.getName().length()));
        max_brand_length = max(max_brand_length, static_cast<int>(shirt.getBrand().length()));
        max_price_length = max(max_price_length, static_cast<int>(shirt.getPrice().length()));
        max_size_length = max(max_size_length, static_cast<int>(shirt.getSize().length()));
        max_material_length = max(max_material_length, static_cast<int>(shirt.getMaterial().length()));
        max_gender_length = max(max_gender_length, static_cast<int>(shirt.getGender().length()));
        max_color_length = max(max_color_length, static_cast<int>(shirt.getColor().length()));
        max_sleeve_type_length = max(max_sleeve_type_length, static_cast<int>(shirt.getSleeve_type().length()));
    }

    // Menampilkan header tabel
    cout << "+-" << string(max_id_length, '-') << "-+-" << string(max_name_length, '-') << "-+-" << string(max_brand_length, '-') << "-+-" << string(max_price_length, '-') << "-+-" << string(max_size_length, '-') << "-+-" << string(max_material_length, '-') << "-+-" << string(max_gender_length, '-') << "-+-" << string(max_color_length, '-') << "-+-" << string(max_sleeve_type_length, '-') << "-+" << endl;
    cout << "| " << setw(max_id_length) << "IDP" << " | " << setw(max_name_length) << "Nama" << " | " << setw(max_brand_length) << "Brand" << " | " << setw(max_price_length) << "Price" << " | " << setw(max_size_length) << "Size" << " | " << setw(max_material_length) << "Material" << " | " << setw(max_gender_length) << "Gender" << " | " << setw(max_color_length) << "Color" << " | " << setw(max_sleeve_type_length) << "Sleeve Type" << " |" << endl;
    cout << "+-" << string(max_id_length, '-') << "-+-" << string(max_name_length, '-') << "-+-" << string(max_brand_length, '-') << "-+-" << string(max_price_length, '-') << "-+-" << string(max_size_length, '-') << "-+-" << string(max_material_length, '-') << "-+-" << string(max_gender_length, '-') << "-+-" << string(max_color_length, '-') << "-+-" << string(max_sleeve_type_length, '-') << "-+" << endl;

    // Menampilkan data pakaian dalam bentuk tabel
    for (Shirt shirt : list) {
        cout << "| " << setw(max_id_length) << shirt.getIdProduct() << " | " << setw(max_name_length) << shirt.getName() << " | " << setw(max_brand_length) << shirt.getBrand() << " | " << setw(max_price_length) << shirt.getPrice() << " | " << setw(max_size_length) << shirt.getSize() << " | " << setw(max_material_length) << shirt.getMaterial() << " | " << setw(max_gender_length) << shirt.getGender() << " | " << setw(max_color_length) << shirt.getColor() << " | " << setw(max_sleeve_type_length) << shirt.getSleeve_type() << " |" << endl;
    }

    // Menampilkan garis penutup tabel
    cout << "+-" << string(max_id_length, '-') << "-+-" << string(max_name_length, '-') << "-+-" << string(max_brand_length, '-') << "-+-" << string(max_price_length, '-') << "-+-" << string(max_size_length, '-') << "-+-" << string(max_material_length, '-') << "-+-" << string(max_gender_length, '-') << "-+-" << string(max_color_length, '-') << "-+-" << string(max_sleeve_type_length, '-') << "-+" << endl;
    
    return 0;
}
