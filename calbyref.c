#include<stdio.h>
void ref(int *p, int *q);
int main()
{
    int a=5, b=8;
    printf("Before calling the function,a= %d and b= %d\n",a,b);
    ref(&a,&b);
    printf("After calling the function,a=%d and b=%d\n", a,b);
}
void ref(int *p,int *q)
{
    (*p)++;
    (*q)++;
    printf("Inside the function x=%d, y=%d\n",p,q);
}
/*Output:
Before calling the function,a= 5 and b= 8
Inside the function x=6422300, y=6422296
After calling the function,a=6 and b=9
*/