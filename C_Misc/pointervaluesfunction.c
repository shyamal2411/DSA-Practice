#include<stdio.h>
func(int x, int y, int *ps, int *pd, int *pp);
int main()
{
    int a,b, sum,diff, prod;
    a=15;
    b=24;
    func(a,b,&sum, &diff, &prod);
    printf("Sum = %d, Difference= %d, Product= %d\n",sum, diff,prod);
}
func(int x, int y, int *ps, int *pd, int *pp)
{
    *ps=x+y;
    *pd=x-y;
    *pp=x*y;
}
