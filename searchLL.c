#include<stdio.h>
#include<stdlib.h>

struct node{

    int info;
    struct node *link;
};
void search(struct node *start, int data);

int main()
{
  struct node *start =NULL;
  int data,item,pos;
  printf("Enter the element to be searched: ");
  scanf("%d",&data);
  search(start,data);
}
/*error: expected identifier or '(' before 'struct'
struct node(struct node start, int data);
^
C:\Users\USER.atom\bin\searchLL.c: In function 'main':
C:\Users\USER.atom\bin\searchLL.c:17:3: */
void search(struct node *start,int item)
{
  struct node  *p=start;
  int pos=1;
  while(p!=NULL)
  {
    if(p->info ==item)
    {
      printf("Item %d found at position %d\n",item,pos);
      return;
    }
    p=p->link;
    pos++;
  }
  printf("Item %d not found in list\n",item);
}
