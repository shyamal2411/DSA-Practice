import java.util.Scanner;

public class ganeshsg {


    public static void main(String args[]) {

        // public static void main(String[] args) {

        int i,j;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        //first part of pattern
        System.out.print("*");
        for (i = 0; i < (n - 3) / 2; i++) {
            System.out.print(" ");
        }
        for (i = 1; i <= (n + 1) / 2; i++) {
            System.out.print("*");
        }
        System.out.println();
        // for part 2 of the pattern
        for (int rows = 1; rows <= (n - 3) / 2; rows++) {
            System.out.print("*");
            for (i = 1; i <= (n - 3) / 2; i++) {
                System.out.print(" ");
            }
            System.out.print("*");
            System.out.println();
        }
        //third component
        for (i = 1; i <= n; i++) {
            System.out.print("*");
        }
        System.out.println();
       //  fourth component
//        for ( j = 1; j <= (n - 3) / 2; j++) {
//            for (i = 1; i <= (n - 3) / 2 + 1; i++) {
//                System.out.println();
//            }
//            //star
//            System.out.print("*");
//            System.out.println();
//
//            //spaces
//            for (i = 1; i <= (n - 3) / 2; i++) {
//                System.out.print(" ");
//
//            }
//            //star
//            System.out.println("*");
//        }
//                for (i = 1; i <= (n - 3) / 2; i++) {
//                    System.out.println(" ");
//                }

                //copy the code here
        //forth component
        for( i=0;i<(n-3)/2;i++)
        {
            for( j=0;j<(n-3)/2+1;j++) {
                System.out.print(" ");
            }
            System.out.print("*");
            for( j=0;j<(n-3)/2;j++) {
                System.out.print(" ");
            }
            System.out.println("*");
        }

                    //fifth component
                    //stars
//                    for (i = 1; i < (n + 1) / 2; i++) {
//                        System.out.print("*");
//                    }
//                    //spaces
//                    for (i = 1; i <= (n - 3) / 2; i++) {
//                        System.out.print(" ");
//                    }
//
//                    //single star
//                    for (i = 1; i <= (n - 3) / 2; i++) {
//                        System.out.print(" ");
//                    }
        // fifth component
        for( i=0;i<((n+1)/2);i++) {
            System.out.print("*");
        }
        for( i=0;i<(n-3)/2;i++) {
            System.out.print(" ");
        }
        System.out.println("*");
                }



    }



