//
// Created by SG on 31-08-2020.
//
#include <stdio.h>
int main()
{
    int a=87;
    float b=4.5;
    int *p1= &a;
    float *p2 =&b;
    printf("Value of p1 = Address of a=%p\n", p1);
    printf("Value of p2 = Address of b=%p\n", p2);
    printf("Value of a= %d %d %d\n",a,*p1,*(&a));
    printf("Address of a= %p %p %p",a,*p1,*(&a));

}