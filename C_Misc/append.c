#include<stdio.h>
#include<stdlib.h>

struct array {
    int A[10];
    int size;
    int length;
};
/*void append (struct array *arr,int x)
{
  if(arr->length<arr->size)
  arr->A[arr->length++]=x;
}*/
// this is the second code to be written on the codespaces powered by github

void display(struct array arr)
{
  int i;
  printf("\nElements are \n");

  for(i=0;i<arr.length;i++)
  printf("%d",arr.A[i]);

}
int main()
{
    struct array arr={{2,3,4,5,6},20,5};
  //  append(&arr,10);
    display(arr);

    return 0;
}
