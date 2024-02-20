public class Shirt extends Clothing {
    private String color;       //String untuk color
    private String sleeve_type; //String untuk Sleeve type

    public Shirt(){           //Konstruktor default untuk class shirt
        this.color = "";
        this.sleeve_type = "";
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
