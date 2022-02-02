package javaP;

public class second {
    public static void main(String[] args) {
        person p1 = new person();
        p1.age = 24;
        p1.name = "Shyamal";
          person p2 = new person();
        p2.age = 25;
        p2.name = "Drashti";

        System.out.println(p1.age + " " + p1.name);
        System.out.println(p2.age + " " + p2.name);
    }
}

class person{
    int age;
    String name;
}
