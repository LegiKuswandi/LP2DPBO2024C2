#include <string>
using namespace std;

class Product {
private:
    string idProduct, name, brand, price; // String private untuk beberapa string id, name, brand, price

public:
    Product() { // Konstruktor default untuk product
        idProduct = "";
        name = "";
        brand = "";
        price = "";
    }

    // Method untuk set idProduct
    void setIdProduct(string idProduct) {
        this->idProduct = idProduct;
    }

    // Method untuk set brand
    void setBrand(string brand) {
        this->brand = brand;
    }

    // Method untuk set name
    void setName(string name) {
        this->name = name;
    }

    // method untuk set price
    void setPrice(string price) {
        this->price = price;
    }

    // Method untuk get brand
    string getBrand() {
        return brand;
    }

    // Method untuk get idProduct
    string getIdProduct() {
        return idProduct;
    }

    // method untuk get name
    string getName() {
        return name;
    }

    // Method untuk get price
    string getPrice() {
        return price;
    }

    ~Product(){
    }
};