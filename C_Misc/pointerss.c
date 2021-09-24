#include<stdlib.h>
#include<stdio.h>
int main()
{
  int a=87;
  float b=4.5;
  int *p1=&a;
  float *p2=&b;
  printf("value of p1= Address of a= %p\n",p1);
  printf("value of p1= Address of a= %p\n",p2);
  printf("ADdress of p1= %p\n",&p1);
  printf("ADdress of p1= %p\n",&p2);
  printf("Value of a =%p %p %d\n",a,*p1,*(&a));
  printf("Value of a =%f %f %f\n",b,*p2,*(&b));

}
