<!-- Saya Legi Kuswandi mengerjakan LP2 dalam mata kuliah DPBO untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. -->

<?php
// import file
require("Shirt.php");

class Tambah{
    // private atribut
    private $Shirtdata = array();

    // CONSTRUCT
    public function __construct($data = array()){
        $this->Shirtdata = $data;
    }

    // PUBLIC METHOD
    public function shirtTambah($idx, $idProduct = "", $name = "", $brand = "", $price = "", $size = "", $material = "", $gender = "", $color = "", $sleeve_type = ""){
        $this->Shirtdata[$idx] = new Shirt(); 
        //Melakukan beberapa set untuk Shirt
        $this->Shirtdata[$idx]->setidProduct($idProduct);
        $this->Shirtdata[$idx]->setname($name);
        $this->Shirtdata[$idx]->setbrand($brand);
        $this->Shirtdata[$idx]->setprice($price);

        $this->Shirtdata[$idx]->setsize($size);
        $this->Shirtdata[$idx]->setmaterial($material);
        $this->Shirtdata[$idx]->setgender($gender);
        
        $this->Shirtdata[$idx]->setcolor($color);
        $this->Shirtdata[$idx]->setsleeve_type($sleeve_type);
    }
    //Untuk tabel keluaran data menggunakan get
    public function DprTampil(){ 
        echo "<table border='1'>";
        echo "<tr>
            <th>idProduct</th>
            <th>Nama</th>
            <th>Brand</th>
            <th>Price</th>
            <th>Size</th>
            <th>Material</th>
            <th>Gender</th>
            <th>Color</th>
            <th>Sleeve Type</th>
            </tr>";
        for($i = 0; $i < sizeof($this->Shirtdata); $i++){
            echo "<tr><td>";
            echo $this->Shirtdata[$i]->getidProduct();
            echo "</td><td>";
            echo $this->Shirtdata[$i]->getname();
            echo "</td><td>";
            echo $this->Shirtdata[$i]->getbrand();
            echo "</td><td>";
            echo $this->Shirtdata[$i]->getprice();
            echo "</td><td>";
            echo $this->Shirtdata[$i]->getsize();
            echo "</td><td>";
            echo $this->Shirtdata[$i]->getmaterial();
            echo "</td><td>";
            echo $this->Shirtdata[$i]->getgender();
            echo "</td><td>";
            echo $this->Shirtdata[$i]->getcolor();
            echo "</td><td>";
            echo $this->Shirtdata[$i]->getsleeve_type();
            echo "</td>";
            echo "</tr>";
        }
        echo "</table>";
    }
    
    // DESTRUCTOR
    function __destruct(){}
}

//Gunakan array untuk data
$dataDPR = array(); 
$temp = new Tambah($dataDPR);
echo "Data Pakaian";
//Gunakan method shirt tambah untuk menambah data secara hardcode
$temp->shirtTambah(0, "F1HBR", "Blackwear", "Nike", "100000", "XL", "Kaos", "P", "Black", "Panjang");
$temp->shirtTambah(1, "TN1234", "PoloShirt", "Poloin", "95000", "M", "Polo", "Unisex", "Green", "Pendek");
$temp->shirtTambah(2, "Y124R", "Cottonreal", "Adidas", "200000", "L", "Katun", "L", "Yellow", "Pendek");
$temp->DprTampil();

?>