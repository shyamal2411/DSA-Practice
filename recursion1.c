#include<stdio.h>
float Ipower(float a,int n);
int main( )
{
	float a, p;
	int n;
	printf("Enter a and n : ");
	scanf("%f %d", &a, &n);
	p = Ipower(a,n);
  	printf("%f raised to power %d is %f\n", a, n, p);
}
  /*  float power(float a,int n)
    {
    	if(n == 0)
    		return(1);
    	else
    		return(a * power(a,n-1));
    }/*End of power()*/

    // execution time : 5.108 s taken from output!!!


    float Ipower(float a , int n)
{
	int i;
	float result=1;
	for(i=1; i<=n; i++)
		result = result * a;
	return result;
}/*End of Ipower()*/
