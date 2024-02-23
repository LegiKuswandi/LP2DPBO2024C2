#include <string.h>
#include "Clothing.cpp"
class Shirt : public Clothing {
private:
    std::string color;
    std::string sleeve_type;

public:
    // Konstruktor default untuk kelas Shirt
    Shirt() {
        color = "";
        sleeve_type = "";
    }

    // Method untuk mengatur tipe lengan
    void setSleeve_type(std::string sleeve_type) {
        this->sleeve_type = sleeve_type;
    }

    // Method untuk mengatur warna
    void setColor(std::string color) {
        this->color = color;
    }

    // Method untuk mendapatkan warna
    std::string getColor() {
        return color;
    }

    // Method untuk mendapatkan tipe lengan
    std::string getSleeve_type() {
        return sleeve_type;
    }
};