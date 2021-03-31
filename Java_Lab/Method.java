package Java_Lab;

class Method{

    public void display1() {
        System.out.println("Without Parameter.");
    }
    public void display2(int a) {
        System.out.println("With Parameter: "+ a);
    }

    public static void main(String[] args) {
        
        Method obj = new Method();

        obj.display1();
        obj.display2(5);
    }
}