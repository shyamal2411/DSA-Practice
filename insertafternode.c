#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *link;
};
struct node *addafter(struct node *start, int data, int item);
int main()
{
struct node *start=NULL;
	int choice, data, item, pos;
	printf("Enter the element to be inserted: \n");
	scanf("%d ",&data);
	printf("Enter the element before which to insert: \n");
	scanf("%d",&item);
	start = addafter(start, data,item);
}

 struct node *addafter(struct node *start,int data, int item)
 {
	 struct node *tmp, *p;
	 p= start;
	 while (p!=NULL){
		 if(p->info ==item)
		 {
			 tmp= (struct node *)malloc(sizeof(struct  node));
			 tmp->info =data;
			 tmp->link=p->link;
			 p->link =tmp;
			 return start;
		 }
		 p=p->link;
	 }
	 printf("%d not present in the list\n",item);
	 return start;
 }
  
