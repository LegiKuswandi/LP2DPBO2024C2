public class Shirt extends Clothing {
    private String color;       //String untuk color
    private String sleeve_type; //String untuk Sleeve type

    public Shirt(){           //Konstruktor default untuk class shirt
        this.color = "";
        this.sleeve_type = "";
    }
    //Konstruktor parameter untuk shirt
    public Shirt(String idProduct, String name, String brand, String price, String size, String material, String gender, String color, String sleeve_type){
        this.color = color;
        this.sleeve_type = sleeve_type;
        //Pemanggilan beberapa method set dari ortu
        setIdProduct(idProduct);
        setName(name);
        setBrand(brand); 
        setPrice(price);
        setSize(size);
        //Pemanggilan beberapa method set dari ortu
        setMaterial(material);
        setGender(gender);
        setColor(color);
    }
    //Method set untuk sleeve type
    public void setSleeve_type(String sleeve_type) {
        this.sleeve_type = sleeve_type;
    }
    //Method untuk set color
    public void setColor(String color) {
        this.color = color;
    }
    //Method untuk get color
    public String getColor() {
        return color;
    }
    //Method untuk get sleeve type
    public String getSleeve_type() {
        return sleeve_type;
    }
}
