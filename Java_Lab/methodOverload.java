package Java_Lab;

class methodOverload{
    private static void display(int a)
    {
        System.out.println("Integr data: " + a);
    }
    private static void display(int a, String b)
    {
        System.out.println("Integer data: " +a + "\t String data: " + b);
    }
    
    public static void main(String[] args) {
        display(1);
        display(11,"Hetvi");
    }
}