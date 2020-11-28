#include<stdio.h>
int main()
{

    int arr[5];
   float sal[10];
   int i,sum;
   scanf("%d",&arr[1]);
   printf("%f",&sal[3]);
   arr[4]= 25;
   arr[4]++;
   sal[5]+=200;
   sum=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
//printf("%d",sum);

    i=2;
    scanf("%f\n",&sal[i]);
    printf("%f\n",sal[i]);
    printf("%f",sal[i++]);
}
