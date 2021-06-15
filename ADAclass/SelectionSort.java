import java.util.*;

public class SelectionSort {

    void selectFn(int[] arr, int n) {

        for (int i = 0; i < n - 1; i++) {

            int index = i;

            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[index])
                    index = j; // search the lowest index
            }

            // swapping both the values, i.e. the smallest and larger
            int smallest = arr[index];
            arr[index] = arr[i];
            arr[i] = smallest;
        }
    }

    public static void main(String[] args) {
        Random numGenerator = new Random();
        int[] arr = new int[10000];

        // random array upto 1000 length
        for (int i = 1; i < 10000; i++) {
            arr[i] = numGenerator.nextInt(10000);
        }

        System.out.println("Start time: ");
        long startTime = System.currentTimeMillis();
        System.out.print(startTime);
        System.out.println();

        //MAIN CODE
        SelectionSort m = new SelectionSort();
        m.selectFn(arr, 10000);

        System.out.println("End time: ");
        long endTime = System.currentTimeMillis();
        System.out.print(endTime);
        System.out.println();

        //PRINTING FUNCTION
        for (int j = 0; j < arr.length; j++) {
            System.out.print(arr[j] + "\t");
        }

        //TIME TAKEN
        long actualTime = endTime - startTime;
        System.out.println("\n\n Total Time:  " + actualTime);
    }
}
