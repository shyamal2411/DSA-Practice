

import java.util.Random;

public class SortNumbers 
{
    void printArray(int arr[])
    {
        int n = arr.length;
        for (int i=0; i<n; ++i)
            System.out.print(arr[i] + " ");
        System.out.println();
    }

    void sortArray(int arr[]){
        int n = arr.length;
        for (int i = 0; i < n-1; i++){
            for (int j = 0; j < n-i-1; j++){
                if (arr[j] > arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
    public static void main(String[] args) 
    {
        Random r = new Random();
        SortNumbers ob = new SortNumbers();
        int[] array = new int[10000];

        int n = array.length;

        for (int k = 0; k < n; k++){
            array[k] = r.nextInt(n);
        }

        long startTime = System.currentTimeMillis();
        ob.sortArray(array);
        long stopTime = System.currentTimeMillis();
        long elapsedTime = stopTime - startTime;

        System.out.println("Elapsed time was " + elapsedTime + " miliseconds.");
        System.out.println(startTime);
        System.out.println(stopTime);
    }
}