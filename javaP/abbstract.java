package javaP;


abstract class mainn{
    public String fname = "Shyamal";
    public String lname = "Chutiyo";
    public int age = 24;
    public abstract void study();
}

class student extends mainn{
    public void study(){
        System.out.println("I am studying");
    }
}

public class abbstract {
    public static void main(String[] args) {
        abbstract ab = new abbstract();
    }
}
