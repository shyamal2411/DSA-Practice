#include<stdlib.h>
#include<stdio.h>
int  main()
{
int n;
scanf("%d",&n);
int arr[n],i;
float pos=0,sub=0,zer=0;
//int i,p=0,q=0,r=0;
for(i=0;i<=n;i++)
{
  scanf("%d",&arr[i]);
}
printf("Completed taking values...");
for(i=0;i<=n;i++)
{
  if(arr[i]<0)
  pos++;

  if(arr[i]>0)
  sub++;

  if(arr[i]==0)
  zer++;
}
printf("%f\n%f\n%f",(pos/n),(sub/n),(zer/n));
}
