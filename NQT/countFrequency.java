package NQT;

import java.util.*;

public class countFrequency {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        Frequency(arr,n);
    }
    static void Frequency(int arr[], int n){
        Map<Integer, Integer> mp = new HashMap<>();
        for(int i = 0; i < n; i++){
            if(mp.containsKey(arr[i]))
            mp.put(arr[i], mp.get(arr[i]+1));
            else
            mp.put(arr[i], 1);
        }
        for(Map.Entry<Integer, Integer> entry:mp.entrySet()){
            System.out.println(entry.getKey()+" "+entry.getValue());
        }
    }
}
