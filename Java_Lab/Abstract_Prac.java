package Java_Lab;

abstract class Abstract_Prac {

    public String name = "Shyamal";
    public int age = 19;

    public abstract void study();
}

class Studentt extends Abstract_Prac {
    public int year = 2023;

    public void study() {
        System.out.println("Student is preparing for exams...");
    }
}

class func {

    public static void main(String[] args) {
        Studentt obj = new Studentt();
        obj.study();
        System.out.println("Name: " + obj.name);
        System.out.println("Age: " + obj.age);
        System.out.println("Graduating on: " + obj.year);
    }
}
