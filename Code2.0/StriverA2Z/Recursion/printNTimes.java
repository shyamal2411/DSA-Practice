public class printNTimes {
    public static void main(String[] args) {
        int n = 4;
        recur(9, n);
        sumN(10, 0);
    }

    static void recur(int i, int n) {
        int count = 0;
        if (i > n)
            return;
        System.out.println(count);
        count += i;
        recur(i + 1, n);
    }

    static void sumN(int i, int sum) {
        if (i < 1) {
            System.out.println(sum);
            return;
        }
        sumN(i - 1, sum + i);
    }
}
