import java.util.*;
import java.util.Scanner;
public class first_class {
public static void main(String args[]){
//    If  is odd, print Weird
//    If  is even and in the inclusive range of  to , print Not Weird
//    If  is even and in the inclusive range of  to , print Weird
//    If  is even and greater than , print Not Weird

    int  i;
    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    System.out.println(N);
    if (N%2!= 0){
        System.out.println("Weird");

    }else if (N<=5){
        System.out.println("Not Weird");
    }else if(N<=20){
        System.out.println("Weird");
    }else{
        System.out.println("Not Weird");
    }


    }
}
