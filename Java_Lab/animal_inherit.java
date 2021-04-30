
class Animals {

    String names;
    // field and method of the parent class

    public void eat() {
        System.out.println("I can eat");
    }
}

// inherit from Animal
class Dogs extends Animals {

    // new method in subclass
    public void display() {
        System.out.println("My name is " + names);
    }
}

public class animal_inherit {
    public static void main(String[] args) {

        // create an object of the subclass
        Dogs labrador = new Dogs();

        // access field of superclass
        labrador.names = "Rohu";
        labrador.display();

        // call method of superclass
        // using object of subclass
        labrador.eat();

    }
}