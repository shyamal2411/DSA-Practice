#include<stdio.h>
#include<stdlib.h>

struct node {

	struct node *prev;
	int data;
	struct node *next;
}*first = NULL;

// void create (int A[], int n)
// {
// 	struct node *t, *last;
// 	int i;

// 	first = (struct node *)malloc(sizeof(struct node));
// 	first->data = A[0];
// 	first->prev = first->next = NULL;
// 	last = first;

// 	for (i = 1; i < n; i++)
// 	{
// 		t = (struct node *)malloc(sizeof(struct node));
// 		t->data = A[i];
// 		t->next = last->next;
// 		t->prev = last;
// 		last = t;

// 	}
// }

//2nd time practice

void create(int A[], int n)
{
	struct node *t, *last;
	int i;
	first = (struct node *)malloc(sizeof(struct node));
	first->data = A[0];
	first->prev = first->next = NULL;
	last = first;

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

// void display(struct node *p)
// {
// 	while (p) {
// 		printf("%d\t", p->data);
// 		p = p->next;
// 	}
// 	printf("\n");
// } 	//aavde che so no 2nd time practice

void display(struct node *p)
{
	while (p)
	{
		printf("%d\t", p->data);
		p = p->next;
	}
	printf("\n");
}

int length(struct node *p)
{
	int len = 0;
	while (p)
	{
		len++;
		p = p->next;
	}
	return len;
}

void insert (struct node *p, int index, int x)
{
	struct node *t;
	int i;
	if (index < 0 || index > length(p))
		return;
	if (index == 0)
	{
		t = (struct node *)malloc(sizeof(struct node));
		t->data = x;
		t->prev = NULL;
		t->next = first;
		first->prev = t;
		first = t;
	}
	else {
		for (i = 0; i < index - 1; i++)
			p = p->next;
		t = (struct node *)malloc(sizeof(struct node));
		t->data = x;
		t->prev = p;
		t->next = p->next;
		if (p->next)p->next->prev = t;
		p->next = t;
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int A[] = {1, 2, 3, 4, 5, 6};
	create (A, 6);
	insert(first, 1, 45);
	printf("Length is: %d\n", length(first));
	display(first);
}