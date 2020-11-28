#include<stdio.h>

int main()
{  //sum of array no program che.
    int n;
    int sum=0,i;
    scanf("%d",&n);
    int ar[n];
    for(int i=n;i>0;i--)
    {
      scanf("%d ",&ar[i]);

      sum+=ar[i];
    }
      printf("%d",sum);
    return 0;
}
