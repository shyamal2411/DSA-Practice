// #include<stdio.h>

// int func(int num1, int num2){
//     static int c= 1;
//     if(c%num1 == 0 && c % num2 == 0)
//     return c;

//     c++;
//     func(num1, num2);
//     return c;
// }

// int main(){
//     int num1= 56;
//     int num2 = 12;
//     printf("%d\n", func(num1, num2));
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>

// void main(){
//     int ind, *pt, *qt;

//     ind = 39;
//     pt = &ind;
//     qt = pt;
//     printf("%d %d %d\n", ind, *pt, *qt);
//     *pt = 13;
//     printf("%d %d %d\n", ind, *pt, *qt);
//     getch();
// }

// #include<stdio.h>
// void main(){
//     int arr[10];
//     int i, n, sum = 0;
//     int *pt;
//     scanf("%d", &n);
//     for(i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     pt = arr;
//     for(i = 0; i < n; i++){
//         sum = sum + *pt;
//         pt++;
//     }
//     printf("%d", sum);
// }


// package javaP;
// import java.util.*;

// interface hack1{
//     String p = "lets code";
//     String methodP();
// }

// interface hack2 extends hack1{
//     String q = "lets party";
//     String methodQ();
// }

// class hack3 implements hack1, hack2{
//     public String methodP(){ return q+p;}

//     public String methodQ(){ return p+q; }
// }


// class java{

//     public static void main(String[] args) {
//         hack3 r = new hack3();
//         System.out.println(r.methodP());
//         System.out.println(r.methodQ());
//     }
// }

CLASS One

Public Name="Hello"

PUBLIC PROCEDURE NEW(givenName)

Name- Name givenName

ENDPROCEDURE

ENDCLASS

CLASS Two INHERITS One

PRIVATE age

PUBLIC PROCEDURE NEW(givenName, givenage) SUPER.NEW(givenName)

age= givenage

ENDPROCEDURE

ENDCLASS

my NEW Two("Hackerearth", 25)

print my.givenName

