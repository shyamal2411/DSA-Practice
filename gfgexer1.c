#include<stdio.h>
#include<stdlib.h>
void iterate_array(int arr[],int n);
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i =0;i<n;i++){
      scanf("%d",&arr[i]);
}
      iterate_array(arr,n);
      printf("\n");

    }
    return 0;
}
void iterate_array(int arr[],int n){

/*for(int i=0;i<n/2;i++)
{
  printf("%d",arr[n]/2);
}
*/
int i;
    for(i=0;i<n/2;i++)
{
  printf("%d",arr[i]);
}
for(i=n-1;i>=n/2;i--){
  printf("%d",arr[i]);
}


}
