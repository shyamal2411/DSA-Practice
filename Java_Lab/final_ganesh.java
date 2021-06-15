import java.util.Scanner;
//import java.util.Scanner;
import java.util.*;

public class final_ganesh {


    public static void main(String args[]){

        int n;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        //First Conponent
        System.out.print("*");
        for(int i=0;i<(n-3)/2;i++) {
            System.out.print(" ");
        }

        for(int i=0;i<((n+1)/2);i++) {
            System.out.print("*");
        }
        System.out.println();
        //Second Component
        for(int i=0;i<(n-3)/2;i++)
        {
            System.out.print("*");
            for(int j=0;j<(n-3)/2;j++) {
                System.out.print(" ");
            }
            System.out.println("*");
        }
        //Third Component
        for(int i=0;i<n;i++) {
            System.out.print("*");
        }
        System.out.println();
        //Fourth Component
        for(int i=0;i<(n-3)/2;i++)
        {
            for(int j=0;j<(n-3)/2+1;j++) {
                System.out.print(" ");
            }
            System.out.print("*");
            for(int j=0;j<(n-3)/2;j++) {
                System.out.print(" ");
            }
            System.out.println("*");
        }
        //Fifth Component
        for(int i=0;i<((n+1)/2);i++) {
            System.out.print("*");
        }
        for(int i=0;i<(n-3)/2;i++) {
            System.out.print(" ");
        }
        System.out.println("*");

    }
}
