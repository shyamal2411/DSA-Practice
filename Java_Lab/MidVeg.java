package Java_Lab;

abstract class veg {
    String colVeg;

    abstract public String toString();
}

class Potato extends veg {

    public String toString() {
        colVeg = "Milk White";
        return colVeg;
    }
}

class Brinjal extends veg {
   
    public String toString() {
        colVeg = "Purple";
        return colVeg;
    }
}

class Tomato extends veg {
   
    public String toString() {
        colVeg = "Reddish";
        return colVeg;
    }
}

public class MidVeg {
    public static void main(String args[]) {
        veg p = new Potato();
        veg b = new Brinjal();
        veg t = new Tomato();
        System.out.println("Potato : " + p.toString());
        System.out.println("Brinjal : " + b.toString());
        System.out.println("Tomato : " + t.toString());
    }

}
