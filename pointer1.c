#include<stdio.h>
int main()
{
    int a=87;
    float b=45;
    int *p1= &a;
    float *p2 =&b;
    printf("Value of p1 = address of A = %p\n", p1);
    printf("Value of p2 = address of B = %p\n", p2);
    printf("Address of p1 =%p\n",&p1);
    printf("Address of p2 =%p\n",&p2);
    printf("Value of a =%d %d %d\n", a,*p1,*(&a));
    printf("Value of b =%d %d %d\n", b,*p2,*(&b));
}
