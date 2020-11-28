
#include <stdio.h>
#include <conio.h>
void fun(int val[]);

int main()
{
int i, arr[6] = {1,2,3,4,56,6};
fun(arr);
printf("Contents of the array are now: ");
for(int i=0; i<6 ; i++){
    printf("%d", arr[i]);
    printf("\n");
}
}
void fun(int val[])
{
    int sum =0,i;
    for(i=0; i<5; i++){
        val[i]= val[i]* val[i];
        sum+= val[i];
    }
    printf("The sum of squares = %d",sum);
}
