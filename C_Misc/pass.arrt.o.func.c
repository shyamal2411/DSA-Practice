#include<stdio.h>
void func(int a[]);
main()
{
    int i, arr[5]= {3,6,2,7,1};
    func(arr);
    printf("Inside main: ");
    for(i=0; i<5;i++)
    {
        printf("%d \n",arr[i]);
    }
}
void func(int a[])
{
    int i;
    printf("Inside func(): ");
    for(i=0; i<5; i++)
    {
        a[i] = a[i] +2;
        printf("%d ",a[i]);
    }
    printf("\n");
}

/*Inside func(): 5 8 4 9 3
Inside main: 5
8
4
9
3*/
