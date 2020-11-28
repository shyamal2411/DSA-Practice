#include<stdio.h>
#include<stdlib.h>

void func(int a,int b)
{
  int c=a+b;
  printf("%d",c);
  //return 0;
}
int main()
{
  int x,y;
  x=23;
  y=90;
  func(x,y);
}/*
#include<stdio.h>
void change(int num) {
    printf("Before adding value inside function num=%d \n",num);
    num=num+100;
    printf("After adding value inside function num=%d \n", num);
    return 0;
}

int main() {
    int x=100;
    printf("Before function call x=%d \n", x);
    change(x);//passing value in function
    printf("After function call x=%d \n", x);
return 0;
}*/
