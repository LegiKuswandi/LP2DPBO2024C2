<?php

require("Product.php");
class Clothing extends Product{

    // PRIVATE ATRIBUT
    private $size = "";
    private $material = "";
    private $gender = "";

    // CONSTRUCT
    function __construct($size = "", $material = "", $gender = ""){
        $this->size = $size;
        $this->material = $material;
        $this->gender = $gender;
    }

    // PUBLIC METHOD (SETTER & GETTER)
    function setsize($size = ""){
        $this->size = $size;
    }

    function getsize(){
        return $this->size;
    }

    function setmaterial($material = ""){
        $this->material = $material;
    }

    function getmaterial(){
        return $this->material;
    }

    function setgender($gender = ""){
        $this->gender = $gender;
    }

    function getgender(){
        return $this->gender;
    }
    
    // DESTRUCTOR
    function __destruct(){
    }
}

?>