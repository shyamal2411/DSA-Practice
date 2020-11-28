#include<stdio.h>
#include<conio.h>
const int NUM =5;
int main()
{

    int i;
    int x[]= {1,2,3,4,5};
    int *y[NUM];

        for (int i=0;i<NUM;i++){
             y[i] = &x[i];
       }
       for(i=0;i<NUM;i++)
       {

        printf("Value of arr[%d] = %d\n",i,y[i]);
       }

        //printf("Address of arr[%d] = %p\n",i, arr+i);


}
/* Output:
Value of arr[0] = 1
Address of arr[0] = 000000000061FE00
Value of arr[1] = 23
Address of arr[1] = 000000000061FE04
Value of arr[2] = 45
Address of arr[2] = 000000000061FE08
Value of arr[3] = 65
Address of arr[3] = 000000000061FE0C
Value of arr[4] = 89
Address of arr[4] = 000000000061FE10*/
