
public class Factorial {
    public static void main(String[] args) {
        int n = 6, factorial = 1;
        for (int a = 1; a <= n; a++) {
            factorial = factorial * a;
        }
        System.out.println("Factorial of " + n + " is : " + factorial);
    }
}
