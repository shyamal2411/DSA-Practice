public class AllPatterns {
    public static void Pattern2() {

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
        /*
         *
         * *
         * * *
         * * * *
         */
    }

    public static void Pattern3() {
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print(j + 1 + " ");
            }
            System.out.println();
        }
        /*
         * 1
         * 1 2
         * 1 2 3
         * 1 2 3 4
         * 1 2 3 4 5
         */
    }

    public static void Pattern4() {
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print(i + " ");
            }
            System.out.println();
        }
        /*
         * 1
         * 2 2
         * 3 3 3
         * 4 4 4 4
         * 5 5 5 5 5
         */
    }

    public static void Pattern5() {
        int n = 5;
        for (int i = 0; i < n; i++) {
            // This is the inner loop which loops for the columns
            // no. of columns = (n - row index) for each line here
            // as we have to print an inverted pyramid.
            // (n-j) will give us the numbers in a row starting from 1 to n-i.
            for (int j = n; j > i; j--) {
                System.out.print(n - j + 1 + " ");
            }

            // As soon as numbers for each iteration are printed, we move to the
            // next row and give a line break otherwise all numbers
            // would get printed in 1 line.
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Pattern3();
    }
}
