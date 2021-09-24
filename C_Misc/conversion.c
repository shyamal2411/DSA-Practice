#include<stdio.h>
float power(float a,int n);
int main()
{                   //some float error in this program.
    float a,p;
    int n;
    printf("Enter base and exponential: ");
    scanf("%f %d",&a,&n);
    p = power(a,n);
    printf("%f raised to power %d is %f\n",a,n,p);
}
float power(float a,int n)
{
  if(n==0)
  rerturn(1);
  else
  return(a* power(a,n-1));
}
