#include<stdio.h>
/*int main()
{

    int arr[10] ={25,65,89,54,12,45,7,1,2,3},*p;
    for(p=arr+2;p<arr+8;p=p+2)
    {
        printf("%d ",*p);
    }
}*/
//89 12 7
int main()
{
    int arr[10] ={25,65,89,54,12,45,7,1,2,3};
    int *p = arr +9;
    for(int i=0;i<10;i++){
        printf ("%d ",*p);
    }
}
