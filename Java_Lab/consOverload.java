package Java_Lab;

public class consOverload {
    String lang;

    consOverload()
    {
        this.lang ="First This.";
    }

    consOverload (String lang)
    {
        this.lang=lang;
    }
    public void getName()
    {
        System.out.println("Language is: " + lang);
    }
    public static void main(String[] args) {
        consOverload co= new consOverload();
        consOverload co2= new consOverload("Java");
        co2.getName();
        co.getName();
    }
}
