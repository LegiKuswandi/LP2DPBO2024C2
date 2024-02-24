<?php
class Product{

    // PRIVATE ATRIBUT
    private $idProduct = "";
    private $name = "";
    private $brand = "";
    private $price = "";

    // CONSTRUCT
    function __construct($idProduct = "", $name = "", $brand = "", $price = ""){
        $this->idProduct = $idProduct;
        $this->name = $name;
        $this->brand = $brand;
        $this->price = $price;
    }

    // PUBLIC METHOD (SETTER & GETTER)
    function setidProduct($idProduct = ""){
        $this->idProduct = $idProduct;
    }

    function getidProduct(){
        return $this->idProduct;
    }

    function setname($name = ""){
        $this->name = $name;
    }

    function getname(){
        return $this->name;
    }

    function setbrand($brand = ""){
        $this->brand = $brand;
    }

    function getbrand(){
        return $this->brand;
    }

    function setprice($price = ""){
        $this->price = $price;
    }

    function getprice(){
        return $this->price;
    }
    
    // DESTRUCTOR
    function __destruct(){
    }
}

?>