#include<stdio.h>
void func(int arr[]);
main()
{
    int arr[5] ={5,64,89,12,65};
    func(arr);
}
void func(int arr[])
{
    int i=5,sum=0;
    while (i>2)
        sum = sum+arr[--i];
        printf("sum = %d\n",sum);
}
