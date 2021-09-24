public class matrixMulti {
    public static void main(String args[]) {
        int a[][] = { { 1, 1, 1 }, { 2, 2, 2 }, { 3, 3, 3 } };
        int b[][] = { { 1, 1, 1 }, { 2, 2, 2 }, { 3, 3, 3 } };

        // created another matrix to store the answer of these 2 matrices
        int c[][] = new int[3][3];// it should be of same size-to j store thase

        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                c[i][j] = 0;

                for (int k = 0; k < 3; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                } // k loop ended
                System.out.print(c[i][j] + "  ");
            }
            System.out.println();
        }
    }
}
