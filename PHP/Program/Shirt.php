<?php

require("Clothing.php");
class Shirt extends Clothing{

    // PRIVATE ATRIBUT
    private $color = "";
    private $sleeve_type = "";

    // CONSTRUCT
    function __construct($color = "", $sleeve_type = ""){
        $this->color = $color;
        $this->sleeve_type = $sleeve_type;
    }

    // PUBLIC METHOD (SETTER & GETTER)
    function setcolor($color = ""){
        $this->color = $color;
    }

    function getcolor(){
        return $this->color;
    }

    function setsleeve_type($sleeve_type = ""){
        $this->sleeve_type = $sleeve_type;
    }

    function getsleeve_type(){
        return $this->sleeve_type;
    }
    
    // DESTRUCTOR
    function __destruct(){
    }
}

?>