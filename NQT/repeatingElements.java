package NQT;

import java.security.KeyStore.Entry;
import java.util.*;

public class repeatingElements {

public static void main(String[] args) {
    int[] arr = {1,1,3,4,5,6,1,3};
    int n = arr.length;
    findRepeating(arr);
}
    static void findRepeating(int arr[]){
        
    HashMap<Integer, Integer> mp = new HashMap<>();
    for(int i: arr){
        if(mp.get(i) == null)
        mp.put(i, 1);
        else
        mp.put(i, mp.get(i)+1);
    }
    System.out.println("Repeating elements are:");
    for(Entry<Integer,Integer> entry: mp.entrySet()) {
        if(entry.getValue()>1)
            System.out.print(entry.getKey()+" ");
    }
    }
}
