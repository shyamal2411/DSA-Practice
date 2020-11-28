#include<stdio.h>
struct node{
  int info;
  struct node *link;
};
void search (struct node *start);
int main(){
  struct node *start =NULL;
  int choice, data,pos;
   printf("Enter the element to be searched: ");
   scanf("%d",&data);
   search(start);
}
void search(struct node *start){
struct node *p = start;
int pos=1;
int item;
while (p!=NULL){
      if(p->info== item)
      {
          printf("Item %d found at position %d\n",item,pos);
         return;
      }
      p=p->link;
      pos++;
}
printf("Item %d not found in list.\n",item);
}
