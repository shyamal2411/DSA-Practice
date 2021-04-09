

class isPrime {

    boolean flag;

    public boolean prime(int n) {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                flag = true;
                break;
            }
        }

        if (!flag)
            System.out.println(n + " is a prime number.");
        else
            System.out.println(n + " is not a prime number.");
        return flag;
    }
}

class PrimeNumber {

    public static void main(String[] args) {

        int n = Integer.parseInt(args[0]);

        isPrime obj = new isPrime();
        boolean flag = obj.prime(n);

        // if (flag == true)
        // System.out.println(n + " Is prime");
        // else
        // System.out.println(n + " is not prime.");
    }
}