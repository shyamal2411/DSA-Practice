#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
}*first = NULL;

void create(int A[], int n)
{
	struct node *t, *last;
	int i;

	first = (struct node *)malloc(sizeof(struct node));
	first->data = A[0];
	first->prev = first->next = NULL;
	last = first;

	//to join nodes to the list
	for (i = 1; i < n; i++)
	{
		t = (struct node *)malloc(sizeof(struct node));
		t->data = A[i];
		t->next = last->next;
		t->prev = last;
		last->next = t;
		last = t;

	}
}

void display(struct node *p)
{
	while (p)
	{
		printf("%d\n", p->data);
		p = p->next;
	}
	printf("\n");
}

int length(struct node *p)
{
	int len = 0;
	while (p)
	{
		len ++;
		p = p->next;
	}
	return len;
}

int main()
{

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int A[] = {10, 20, 30, 40, 50};
	create(A, 5);
	printf("\nLength is: %d\n", length(first));
	display(first);
	return 0;

}