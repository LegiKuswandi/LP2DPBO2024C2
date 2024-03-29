/*Saya Legi Kuswandi mengerjakan LP2 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang 
telah dispesifikasikan. Aamiin.*/

import java.util.Scanner;
import java.util.ArrayList;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Shirt> list = new ArrayList<>();
        int apain = 0;
        for (int i = 0; i < 1; i++) { //Perulangan 3 kali untuk meminta 3 kali masukan data
            //Meminta masukan untuk Id, Nama, Brand, Price
            System.out.print("Masukkan IDProduct: ");
            String idProduct = scanner.next();
            System.out.print("Masukkan Nama: ");
            String name = scanner.next();
            System.out.print("Masukkan Brand: ");
            String brand = scanner.next();
            System.out.print("Masukkan Price: ");
            String price = scanner.next();
            //Meminta masukan untuk size, material dan gender
            System.out.print("Masukkan Size: ");
            String size = scanner.next();
            System.out.print("Masukkan Material: ");
            String material = scanner.next();
            System.out.print("Masukkan Gender: ");
            String gender = scanner.next();
            //meminta masukan untuk color dan sleeve type
            System.out.print("Masukkan Color: ");
            String color = scanner.next();
            System.out.print("Masukkan Sleele Type: ");
            String sleeve_type = scanner.next();

            Shirt Tshirt = new Shirt(); //Instansiasi cucu shirt
            //melakukan beberapa set
            Tshirt.setIdProduct(idProduct);
            Tshirt.setName(name);
            Tshirt.setBrand(brand);
            Tshirt.setPrice(price);
            
            Tshirt.setSize(size);
            Tshirt.setMaterial(material);
            Tshirt.setGender(gender);

            Tshirt.setColor(color);
            Tshirt.setSleeve_type(sleeve_type);
            list.add(Tshirt);

            System.out.println("Data Berhasil ditambahkan horeee");
            System.out.println("");
        }
        //Pembuatan tabel dari data yang sudah diisi ke shirt yaitu cucu
        System.out.println("Super/Base Class");
        System.out.println("+----------+-------------+----------------+---------------+");
        System.out.println("| IDP      | Nama        | Brand          | Price         |");
        System.out.println("+----------+-------------+----------------+---------------+");
        for (Shirt shirt : list) {
            System.out.printf("| %-9s| %-12s| %-15s| %-14s|%n", shirt.getIdProduct(), shirt.getName(), shirt.getBrand(), shirt.getPrice());
        }
        System.out.println("+----------+-------------+----------------+---------------+");
        for(int i=0; i<29; i++){
            System.out.print(" ");
        }
        System.out.println("^");
        for(int i=0; i<4; i++){
            for(int j=0; j<29; j++){
                System.out.print(" ");
            }
            if(i == 1){
                System.out.println("| Inherits");
            }else{
                System.out.println("|");
            }
        }
        System.out.println("         Derived Class 1                            ");
        System.out.println("         +----------+-------------+----------------+");
        System.out.println("         | Size     | Nama        | gender         |");
        System.out.println("         +----------+-------------+----------------+");
        for (Shirt shirt : list) {
            System.out.printf("         | %-9s| %-12s| %-15s|%n", shirt.getSize(), shirt.getMaterial(), shirt.getGender());
        }
        System.out.println("         +----------+-------------+----------------+");
        for(int i=0; i<29; i++){
            System.out.print(" ");
        }
        System.out.println("^");
        for(int i=0; i<4; i++){
            for(int j=0; j<29; j++){
                System.out.print(" ");
            }
            if(i == 1){
                System.out.println("| Inherits");
            }else{
                System.out.println("|");
            }
        }
        System.out.println("               Derived Class 2                            ");
        System.out.println("               +-------------+----------------+");
        System.out.println("               | Color       | ST             |");
        System.out.println("               +-------------+----------------+");
        for (Shirt shirt : list) {
            System.out.printf("               | %-12s| %-15s|%n", shirt.getColor(), shirt.getSleeve_type());
        }
        System.out.println("               +-------------+----------------+");
    }
}
