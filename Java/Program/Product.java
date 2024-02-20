class Product{
    private String idProduct, name, brand, price; //String private untuk beberapa string id, name, brand, price

    public Product() { //Konstruktor default untuk product
        this.idProduct = "";
        this.name = "";
        this.brand = "";
        this.price = "";
    }
    //Konstruktor parameter untuk product
    public Product(String idProduct, String name, String brand, String price ){
        this.idProduct = idProduct;
        this.name = name;
        this.brand = brand;
        this.price = price;
    }
    //Method untuk set idProduct
    public void setIdProduct(String idProduct) {
        this.idProduct = idProduct;
    }
    //Method untuk set brand
    public void setBrand(String brand) {
        this.brand = brand;
    }
    //Method untuk set name
    public void setName(String name) {
        this.name = name;
    }
    //method untuk set price
    public void setPrice(String price) {
        this.price = price;
    }
    //Method untuk get brand 
    public String getBrand() {
        return brand;
    }
    //Method untuk get idProduct
    public String getIdProduct() {
        return idProduct;
    }
    //method untuk get name
    public String getName() {
        return name;
    }
    //Method untuk get price
    public String getPrice() {
        return price;
    }
}