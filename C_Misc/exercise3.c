#include<stdio.h>
void func(int arr[]);
int main()
{
    int arr[5] = {5,10,15,20,25};
    func(arr);
}
void func(int arr[]){
    int sum=0;
    int i=5;
    while(i>2)
        sum= sum+arr[--i];
    printf("Sum = %d\n",sum);
}
/*Sum = 60*/
