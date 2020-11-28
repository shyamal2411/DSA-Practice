#include<stdio.h>
struct node{
int info;
struct  node *link;
};
void display (struct node *start);
 int main()
 {
   struct node *start = NULL;
   int choice, data, item, pos;
   display(start);
 }
 void display (struct node *start)
 {
   struct node *p;
   if(start == NULL)
   {
     printf("List is empty.");
    return;
   }
   p=start;
   printf("List is: \n");
   while(p!=NULL){
     printf("%d",p->info);
     p=p->link;
   }
   printf("\n\n");
 }

