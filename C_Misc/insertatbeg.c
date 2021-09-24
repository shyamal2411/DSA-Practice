#include<stdio.h>
#include<stdlib.h>

struct node{
  int info;
  struct node *link;
};
struct node *insertatbeg(struct node *start, int data);

int main()
{
	struct node *start =NULL;
	int choice,data,item,pos;
	printf("Enter the element to be inserted: ");
	scanf("%d",data);
	start=insertatbeg(start,data);
}
struct node *insertatbeg(struct node *start,int data)
{
	struct node *tmp;
	tmp = (struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=start;
	start = tmp;
	return start;
}
