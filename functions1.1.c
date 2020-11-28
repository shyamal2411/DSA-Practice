#include<stdio.h>
void value(int x, int y);
int main()
{
    int a=5, b=8;
    printf("Before calling the function,a= %d and b= %d\n",a,b);
    value(a,b);
    printf("After calling the function,a=%d and b=%d\n", a,b);
}
void value(int x,int y)
{
    x++;
    y++;
    printf("Inside the function x=%d, y=%d\n",x,y);
}
