#include<stdio.h>
#include<stdlib.h>

struct array{

    int a[10];
    int size;
    int length;
};

void display(struct array arr){
  int i;
  printf("Elements are: \n");
  for(i=0;i<arr.length;i++)
  {
    printf("%d",arr.a[i]);
  }
}/* error: request for member 'size' in something not a structure or union
if(arr->length<arr.size) */
void append(struct array *arr,int x)
{
  if(arr->length<arr.size)
  arr->a[arr->length++]= x;

}
int main()
{
  struct array arr ={{2,3,4,5,6},10,5};

append(&arr,10);
  display(arr);
  return 0;
}
