#include<stdio.h>
#include <stdlib.h>
struct node{
	int info;
	struct node *link;
};
struct node insertatend(struct node *start, int data,int pos);

int main(){
	struct node *start =NULL;
	int choice, data,item, pos;
	printf("Enter the data to be inserted at the end: \n");
	scanf("%d",data);
	printf("Enter the position to be inserted: ");
	scanf("%d",&pos);
	start = insertatend(start,data,pos);
}
struct node *insertatend(struct node *start,int data)
{
	struct node *p,*tmp;
	tmp= (struct node *)malloc(sizeof(struct node));
	tmp->info =data;
	p=start;
	while(p->link!=NULL)
	p=p->link;
	tmp ->link=NULL;
	return start;

}
