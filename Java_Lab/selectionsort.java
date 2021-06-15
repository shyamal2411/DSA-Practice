import java.util.*;

public class selectionsort {

    public static void main(String args[]) {

        int[] arr1 = { 9, 1, 14, 65, 4, 8 };
        System.out.print("Before Selection sort:\t");
        for (int i : arr1) {
            System.out.print(i + " ");

        }
        System.out.println();
        selectionsort(arr1);
        System.out.print("After Selection sort:\t");
        for (int i : arr1) {
            System.out.print(i + " ");
        }
    }

    public static void selectionsort(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            int index = i;
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[j] < arr[index]) {
                    index = j;

                }
            }
            int small = arr[index];
            arr[index] = arr[i];
            arr[i] = small;
        }
    }

}
