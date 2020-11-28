#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*first = NULL;

void create(int a[], int n)
{
	int i;
	struct node *t, *last;
	first = (struct node*)malloc(sizeof(struct node));
	first->data = a[0];
	first->next = NULL;
	last = first;

	for (i = 1; i < n; i++)
	{
		t = (struct node*)malloc(sizeof(struct node));
		t->data = a[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}
void display(struct node *p)
{
	printf("The linkedlist is :\n");
	while (p != NULL)
	{
		printf("%d\t", p->data);
		p = p->next;
	}
	printf("\n");
}

void rdisplay(struct node *p)
{
	if (p != NULL)
	{	printf("%d\t", p->data);
		rdisplay(p->next);
		//printf("%d\t", p->data); /*if this line is executed after rdisplay function, we can obtain reverse linkedlist,
		//another way of reversing the list*/
	}
}
int count(struct node *p)
{	//time taken is n  O(n).
	//space is constant O(1).
	int c = 0;
	while (p != 0)
	{
		c++;
		p = p->next;
	}
	return c;
}

int rcount(struct node *p)
{
	if (p == 0)
		return 0;

	else
		return rcount(p->next);
	/*
			another approach
		if(p!=NULL)
		return 1+count(p->next);

		return 0;

		*/
}
//iterative approach
int sum(struct node *p)
{
	int s = 0;
	while (p != NULL) {
		s += p->data;
		p = p->next;
	}
	return s;
}
//resursive approach
int rsum(struct node *p)
{
	if (p == NULL)
		return 0;
	else
		return rsum(p->next) + p->data;
}

//iterative approach
int max(struct node *p)
{
	int max = -32767;

	while (p)
	{
		if (p->data > max)
			max = p->data;
		p = p->next;
	}
	return max;
}

int rmax(struct node *p)
{
	int x = 0;

	if (p == 0)
		return (-32767);
	x = rmax(p->next);
	if (x > p->data)
		return x;

	else
		return p->data;
}

//Linear search function
// struct node * lsearch(struct node *p, int key)
// {
// 	while (p != NULL)
// 	{
// 		if (key == p->data)
// 			return p;
// 		p = p->next;
// 	}
// 	return NULL;
// }

//binary search approach
/*struct node * lsearch(struct node *p, int key)
{
	struct node *q;

	while (p != NULL)
	{
		if (key == p->data)
		{
			q->next;
			p->next = first;
			first = p;
			return p;
		}
		q = p;
		p = p->next;
	}
	return NULL;
}*/

// struct node * rsearch(struct node *p, int key)
// {
// 	if (p == NULL)
// 		return NULL;
// 	if (key == p->data)
// 		return p;
// 	rsearch(p->next, key);
// }

void insert(struct node *p, int index, int x)
{
	struct node *t;

	if (index < 0 || index > count(p))
		return;

	t = (struct node *)malloc(sizeof(struct node));
	t->data = x;

	if (index == 0)
	{
		t->next = first;
		first = t;
	}
	else
	{
		for (int i = 0; i < index - 1; i++)
			p = p->next;
		t->next = p->next;
		p->next = t;
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	struct node  *temp;
	int a[] = {3, 4, 5, 7, 9, 63};
	create(a, 6);

	//printf("Length of linkedlist is: %d\n", count(first));//or  rcount(first);
	//rdisplay(first);
	//printf("\nSum of elements in linkedlist is %d\n", sum(first));//or write rsum(first);
	//printf("\nMax is %d\n", max(first));//or write rmax(first)
	// temp = lsearch(first, 3);
	// if (temp)
	// 	printf("\n%d is found \n", temp->data);
	// else
	// 	printf("Key not found\n");
	display(first);
	return 0;
}