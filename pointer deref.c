#include<stdio.h>
main(){
    int a=87;
    float b=4.5;
    int *p1= &a;
    float *p2 =&b;
    printf("Value of p1 = Address of a=%p\n", p1);
    printf("Value of p2 = Address of b=%p\n", p2);
    printf("Value of a= %d %d %d\n",a,*p1,*(&a));
    printf("Address of a= %p %p %p",a,*p1,*(&a));

}
/*Value of p1 = Address of a=000000000061FE0C
Value of p2 = Address of b=000000000061FE08
Value of a= 87 87 87
Value of a= 87 87 87
Address of a= 0000000000000057 0000000000000057 0000000000000057*/
N
