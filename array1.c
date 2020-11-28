#include<stdio.h>
#include<stdlib.h>
struct array{
  int *a;
  int size;
  int length;
};

void display(struct array arr)
{
  int i;
  printf("Elements are: \n");
  for(i=0;i<arr.length;i++)
  printf("%d",arr.a[i]);
}

int main()
{
    int i;
    struct array arr;
printf("Enter the size of array: ");
scanf("%d",&arr.size);
  int a=(int *)malloc(arr.size * sizeof(int));
arr.length=0;
    printf("Enter number of numbers: ");
    scanf("%d",&n);
    printf("Enter all elements: \n");
for(i=0;i<n;i++)
    scanf("%d",arr.a[i]);
  arr.length=n;

display(arr);
  return 0;
}
