public class Mysort {

    public int arr[] = { 4, 5, 8, 9, 7, 3, 2, 1, 6, 12 }, temp, j, i, first, second, mid = 0;

    public void sort() {
        temp = 0;

        for (i = 0; i < 10; i++) {
            for (j = 0; j < 10; j++) {

                if (arr[i] > arr[j]) {

                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }

            }

        }
    }

    public void print() {
        for (i = 0; i < 10; i++) {
            System.out.print(" " + arr[i]);
        }
    }

    public static void main(String str[]) {
        Mysort ss = new Mysort();
        ss.sort();
        ss.print();
    }
}
