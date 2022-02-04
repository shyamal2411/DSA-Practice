package NQT;
import java.util.*;

public class rearrangeElements {
    public static void main(String[] args) {
        
        int n, sum = 0;
        Scanner sc = new Scanner(System.in);
        // System.out.println("Enter no. of elements you want in array:");
        n = sc.nextInt();
        int a[] = new int[n];

        for(int i = 0; i < n; i++){
            a[i] = sc.nextInt();
    }
    Arrays.sort(a);
    for(int i = 0; i < n/2; i++)
    System.out.print(a[i]+" ");
    System.out.println();
    for(int i = n-1; i >= n/2; i--)
    System.out.print(a[i]+" ");
}
}