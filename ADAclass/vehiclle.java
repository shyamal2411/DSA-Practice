public class vehiclle {
protected String brand = "Mercedes";
public void honk(){
System.out.println("Beep beep");
}    
}

class car extends vehiclle{
    private String modelName = "AMG";
    public static void main(String[] args) {
        car myCar = new car();
        myCar.honk();
        System.out.println(myCar.modelName);
    }
}
