import java.util.*;
import java.util.Scanner;

public class reverseNumber{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int rev = 0;

        while(n){
            int lastDigit = n%10;
            rev = rev*10 + lastDigit;
            n = n/10;
        }
        System.out.println(rev);
    }
}