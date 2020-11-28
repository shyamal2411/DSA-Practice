#include<stdio.h>
int main()
{
    int t,n,arr[n];
  //  printf("Enter the test case: ");
    scanf("%d\n",&t); // number of test case
    while (t--) {
    //  printf("Number values to insert: ");
      scanf("%d\n",&n); //number of values to take.
      while(n--)
      {// printf("Enter the value: ");
        scanf("%d\t",&arr[n]);//taking valus.
      }
        //checking odd or even to apply median formula accordingly.
      if(n%2==0)
        printf("%d",n/2);
      else
       printf("%d",(n/2)+1);
            }
}
