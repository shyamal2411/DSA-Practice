#include <stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *link;
};

struct node *create_list(struct node *start);
int main()
{
	struct node *start =NULL;
	int choice, data,item, pos;
	start = create_list(start);
}

struct node *create_list(struct node *start)
{
	int i,n,data;
	printf("Enter the number of nodes to be included in the list: ");
	scanf("%d",&n);
	start =NULL;
	if(n==0)
		return start;

		printf("Enter the elements to be inserted in the list: ");
		scanf("%d",&data);
		start = insertatbeg(start,data);
		for(i=2;i<=n;i++)
		{
			printf("Enter the elements to be inserted: ");
			scanf("%d",&data);
			start = insertatend(start,data);
		}
		return start;
}
