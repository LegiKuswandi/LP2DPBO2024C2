class Clothing extends Product {
    private String size;     //String untuk size
    private String material; //String untuk material
    private String gender;   //String untuk gender

    //Konstruktor deafault untuk class clothing
    public Clothing() {
        this.size = "";
        this.material = "";
        this.gender = "";
    }

    //Method untuk set size
    public void setSize(String size) {
        this.size = size;
    }
    //method untuk set gender
    public void setGender(String gender) {
        this.gender = gender;
    }
    //Method untuk set material
    public void setMaterial(String material) {
        this.material = material;
    }
    //Method untuk get size
    public String getSize() {
        return size;
    }
    //Method untuk get material
    public String getMaterial() {
        return material;
    }
    //Method untuk get gender
    public String getGender() {
        return gender;
    }
}
