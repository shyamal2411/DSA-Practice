import java.util.*;

public class insertionSort {

    void insertFn(int[] arr, int n) {

        for (int i = 1; i < n; i++) {
            int val = arr[i];
            int j = i - 1; // j starts from i-1th element

            while (arr[j] > val && j >= 0) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = val;
        }

    }

    public static void main(String[] args) {

        Random numGenerator = new Random();
        int[] arr = new int[1000];

        // random array upto 1000 length
        for (int i = 1; i < 1000; i++) {
            arr[i] = numGenerator.nextInt(10000);
        }

        System.out.println("Start time: ");
        long startTime = System.currentTimeMillis();
        System.out.println();

        insertionSort m = new insertionSort();
        m.insertFn(arr, 1000);

        long endTime = System.currentTimeMillis();
        System.out.println();

        for (int j = 0; j < arr.length; j++) {
            System.out.print(arr[j] + "\t");
        }

        long actualTime = endTime - startTime;
        System.out.println("\n\n Total Time:  " + actualTime);
    }

}