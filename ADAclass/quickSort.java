import java.util.*;

public class quickSort {
    static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    static int partition(int[] arr, int low, int high) {

        int pivot = arr[high];

        int i = (low - 1);

        // For loop: O(n)
        for (int j = low; j <= high - 1; j++) {

            if (arr[j] < pivot) {

                i++;
                swap(arr, i, j);
            }
        }
        swap(arr, i + 1, high); /// O(1)
        return (i + 1);
    }

    static void quickFn(int[] arr, int low, int high) {
        if (low < high) {

            int pi = partition(arr, low, high);

            quickFn(arr, low, pi - 1); // O(n)
            quickFn(arr, pi + 1, high);// O(n)
        }
    }

    public static void main(String[] args) {
        Random numGenerator = new Random();
        int[] arr = new int[10000];

        // random array upto 1000 length
        for (int i = 1; i < 10000; i++) {
            arr[i] = numGenerator.nextInt(10000);
        }

        /* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
        /* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

        System.out.println();
        System.out.println("Start time: ");
        long startTime = System.currentTimeMillis();
        System.out.print(startTime);
        System.out.println();

        // MAIN CODE
        quickSort m = new quickSort();
        m.quickFn(arr, 0, 9999);

        System.out.println("End time: ");
        long endTime = System.currentTimeMillis();
        System.out.print(endTime);
        // System.out.println();

        long actualTime = endTime - startTime;
        System.out.println("\nTotal Time: " + actualTime + " miliseconds");

        /* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
        /* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
        System.out.println("\n");
        System.out.println("Start time after sorting: ");
        long startTime1 = System.currentTimeMillis();
        System.out.print(startTime1);
        System.out.println();

        m.quickFn(arr, 0, 9999);

        System.out.println("End time after sorting: ");
        long endTime1 = System.currentTimeMillis();
        System.out.print(endTime1);
        // System.out.println();

        long actualTime1 = endTime1 - startTime1;
        System.out.println("\nTotal Time for sorting: " + actualTime1 + " miliseconds");

        /* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
        /* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
        System.out.println("\n");
        System.out.println("Start time for reverse sorting: ");
        long startTime2 = System.currentTimeMillis();
        System.out.print(startTime2);
        System.out.println();
        // for (int i = 0; i < arr.length; i++)
        // System.out.println(arr[i]); //unnecessary code

        System.out.println("End time after reverse sorting: ");
        long endTime2 = System.currentTimeMillis();
        System.out.print(endTime2);
        // System.out.println();

        long actualTime2 = endTime2 - startTime2;
        System.out.println("\nTotal Time in reverse sorted arr: " + actualTime2 + " miliseconds");

        // PRINTING FUNCTION
        // for (int j = 0; j < arr.length; j++) {
        // System.out.print(arr[j] + "\t");
        // }

        // TIME TAKEN
        // long actualTime = endTime - startTime;
        // System.out.println("\n\n Total Time: " + actualTime);
    }
}
