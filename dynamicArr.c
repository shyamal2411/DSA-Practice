#include<stdio.h>
#include<stdlib.h>

int main()
{
  int *p,*q;
  int i;
  p=(int *)malloc(5 * sizeof(int));
  p[0] = 3;
  p[1] = 6;
  p[2] = 5;
  p[3] = 4;
  p[4] = 2;
    for(i=0;i<5;i++)
    printf("%d \n",p[i]);
  return 0;
}
