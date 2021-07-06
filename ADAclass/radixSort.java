import java.util.*;

public class radixSort {
    static int getMax(int arr[], int n) {
        int mx = arr[0];
        for (int i = 1; i < n; i++)
            if (arr[i] > mx)
                mx = arr[i];
        return mx;
    }

    static void countSort(int arr[], int n, int exp) {
        int output[] = new int[n]; 
        int i;
        int count[] = new int[10];
        Arrays.fill(count, 0);

      
        for (i = 0; i < n; i++)
            count[(arr[i] / exp) % 10]++;

        for (i = 1; i < 10; i++)
            count[i] += count[i - 1];

        for (i = n - 1; i >= 0; i--) {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }

        for (i = 0; i < n; i++)
            arr[i] = output[i];
    }

    static void radixFn(int arr[], int n) {
        int m = getMax(arr, n);
        for (int exp = 1; m / exp > 0; exp *= 10)
            countSort(arr, n, exp);
    }

    public static void main(String[] args) {

        Random numGenerator = new Random();
        int[] arr = new int[1000];

        // random array upto 1000 length
        for (int i = 1; i < 1000; i++) {
            arr[i] = numGenerator.nextInt(10000);
        }

        // System.out.println("Start time: ");
        // long startTime = System.currentTimeMillis();
        // System.out.println();

        radixSort m = new radixSort();
        m.radixFn(arr, 1000);

        // long endTime = System.currentTimeMillis();
        // System.out.println();

            //TIME: O(n)
        for (int j = 0; j < arr.length; j++) {
            System.out.print(arr[j] + "\t");
        }

        // long actualTime = endTime - startTime;
        // System.out.println("\n\n Total Time:  " + actualTime);
    }

}