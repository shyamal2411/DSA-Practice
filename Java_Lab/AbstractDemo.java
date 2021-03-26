package Java_Lab;

abstract class AbstractDemo {
    public String fname = "John";
    public int age = 24;

    public abstract void study();// abstract method
}

// Subclass (inherit from AbstractDemo)
class Student extends AbstractDemo {
    public int graduationYear = 2018;

    // the body of the abstract method is provided here
    public void study() { 
        System.out.println("Studying all day long");
    }
}

class Second {

    public static void main(String[] args) {
        // create an object of the Student class (which inherits attributes and methods
        // from AbstractDemo)
        Student myObj = new Student();

        System.out.println("Name: " + myObj.fname);
        System.out.println("Age: " + myObj.age);
        System.out.println("Graduation Year: " + myObj.graduationYear);
        myObj.study(); // call abstract method
    }
}