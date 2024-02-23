#include <string.h>
#include "Product.cpp"

class Clothing : public Product {
private:
    string size;     // String untuk size
    string material; // String untuk material
    string gender;   // String untuk gender

public:
    // Konstruktor deafault untuk class clothing
    Clothing() {
        size = "";
        material = "";
        gender = "";
    }

    // Method untuk set size
    void setSize(string size) {
        this->size = size;
    }

    // method untuk set gender
    void setGender(string gender) {
        this->gender = gender;
    }

    // Method untuk set material
    void setMaterial(string material) {
        this->material = material;
    }

    // Method untuk get size
    string getSize() {
        return size;
    }

    // Method untuk get material
    string getMaterial() {
        return material;
    }

    // Method untuk get gender
    string getGender() {
        return gender;
    }
};