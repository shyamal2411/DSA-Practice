package Java_Lab;

class Animals {

    // field and method of the parent class
    String names;

    public void eat() {
        System.out.println("I can eat");
    }
}

// inherit from Animal
class Dogs extends Animal {

    // new method in subclass
    public void display() {
        System.out.println("My name is " + names);
    }
}

public class animal_inherit{
    public static void main(String[] args) {

    // create an object of the subclass
    Dog labrador = new Dog();

    // access field of superclass
    labrador.names = "Rohu";
    labrador.display();

    // call method of superclass
    // using object of subclass
    labrador.eat();

  }
}