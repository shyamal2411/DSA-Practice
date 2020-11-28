//program for the sum of square of an array using function.

#include<stdio.h>
void func(int val[]);
main()
{
    int i,arr[6] ={1,2,3,4,5,6};
    func(arr);
    printf("Contents are now:");
    for(i=0;i<6;i++){
        printf("%d\n",arr[i]);
    }
}
void func(int val[]){
    int sum=0,i;
    for(i=0;i<6;i++)
    {
        val[i] = val[i]*val[i];
        sum += val[i];
    }
    printf("The sum of squares is= %d\n",sum);
}
/*The sum of squares is= 91
Contents are now:1
4
9
16
25
36*/
