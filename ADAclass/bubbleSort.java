import java.util.*;

public class bubbleSort {

    void bubbleFn(int[] arr, int n) {
        int temp = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < (n - i); j++) {
                if (arr[j - 1] > arr[j]) {
                    temp = arr[j - 1];
                    arr[j - 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        Random numGenerator = new Random();
        int[] arr = new int[10];

        // random array upto 1000 length
        for (int i = 1; i < 10; i++) {
            arr[i] = numGenerator.nextInt(10);
        }

        /* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
        /* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

        System.out.println();
        System.out.println("Start time: ");
        long startTime = System.currentTimeMillis();
        System.out.print(startTime);
        System.out.println();

        // MAIN CODE
        bubbleSort m = new bubbleSort();
        m.bubbleFn(arr, 10);

        System.out.println("End time: ");
        long endTime = System.currentTimeMillis();
        System.out.print(endTime);
        System.out.println();

        long actualTime = endTime - startTime;
        System.out.println("\n\n Total Time:  " + actualTime);

        /* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
        /* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

        System.out.println("Start time after sorting: ");
        long startTime1 = System.currentTimeMillis();
        System.out.print(startTime1);
        System.out.println();

        m.bubbleFn(arr, 10);

        System.out.println("End time after sorting: ");
        long endTime1 = System.currentTimeMillis();
        System.out.print(endTime1);
        System.out.println();

        long actualTime1 = endTime1 - startTime1;
        System.out.println("\n\nTotal Time:  " + actualTime1);

        /* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
        /* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

        System.out.println("Start time for reverse sorting: ");
        long startTime2 = System.currentTimeMillis();
        System.out.print(startTime2);
        System.out.println();
        for (int i = 0; i < arr.length; i++)
            System.out.println(arr[i]);

        System.out.println("End time after reverse sorting: ");
        long endTime2 = System.currentTimeMillis();
        System.out.print(endTime2);
        System.out.println();

        long actualTime2 = endTime2 - startTime2;
        System.out.println("\n\n Total Time in reverse sorted arr:  " + actualTime2);

        // PRINTING FUNCTION
        for (int j = 0; j < arr.length; j++) {
            System.out.print(arr[j] + "\t");
        }

        // TIME TAKEN
        // long actualTime = endTime - startTime;
        // System.out.println("\n\n Total Time: " + actualTime);
    }
}
