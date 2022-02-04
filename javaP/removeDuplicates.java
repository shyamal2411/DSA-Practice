package javaP;

import java.util.*;

public class removeDuplicates {
    public static void main(String[] args) {
        int arr[] = { 1, 1, 3, 4, 5, 1, 2, 3,1 };
        int k = help(arr);
        System.out.println("Unique Elements: " + k);
        for (int i : arr) {
            System.out.println(i + " ");
        }
    }

    static int help(int[] arr) {
        HashSet<Integer> set = new HashSet<>();
        for (int i : arr)
            set.add(i);

        int k = set.size();
        int j = 0;
        for (int i : set)
            arr[j++] = i;

        return k;
    }
}
