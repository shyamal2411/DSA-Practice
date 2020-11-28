#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*first = NULL, *second = NULL, *third = NULL;

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
/*created 2nd list for concatenation & merging*/
void create2(int a[], int n)
{
	int i;
	struct node *t, *last;
	second = (struct node*)malloc(sizeof(struct node));
	second->data = a[0];
	second->next = NULL;
	last = second;

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
{	//time taken is n, O(n).
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
		p->next = t;/*jo aa doubly hout to aiya t->prev=p kari didhu haut*/
	}
}

void sortinsert(struct node *p, int x)
{	//min time is O(1),max time is O(n)
	struct node *t, *q = NULL; //q is tail pointer
	t = (struct node *)malloc(sizeof(struct node));
	t->data = x;
	t->next = NULL;

	if (first == NULL)
		first = t; /*if no node in the lsit then assign t as first*/
	else {
		while (p && p->data < x)
		{
			q = p;
			p = p->next;
		}
		if (p == first) /*if the element we're inserting is smallest,then it has to be inserted before first node*/
		{
			t->next = first;
			first = t;
		}
		else
		{
			t->next = q->next;
			q->next = t;
		}
	}
}

int issorted(struct node *p)
{
	int x = -65536;
	while (p != NULL)
	{
		if (p->data < x)
			return 0;
		x = p->data;
		p = p->next;
	}
	return 1;
}

void duplicate(struct node *p)
{
	struct node *q = p->next;
	while (q != NULL)
	{
		if (p->data != q->data)
		{
			p = q;/*jo p ane q na data same na hoy to
			q pointer ne p ni position aapi do ane pchi q ne aagad shift karo*/
			q = q->next;
		}
		else /*but jo duplicate data hoy to q ne delete karo*/
		{
			p->next = q->next; //if same data nodes,then store q's  next in p and delete p
			free(q);
			q = p->next;
		}
	}
}

void reverse1(struct node *p)
{
	int *a, i = 0;
	struct node *q = p;
	a = (int *)malloc(sizeof(int) * count(p));
	while (q != NULL)
	{
		a[i] = q->data; //storing data in array
		q = q->next;
		i++;
	}
	q = p;
	i--;
	while (q != NULL)
	{
		q->data = a[i];
		q = q->next;
		i--;
	}
}

void reverse2(struct node *p)
{
	struct node *q = NULL, *r = NULL;
	while (p != NULL)
	{
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	first = q;
}

void r_reverse(struct node *q, struct node *p)
{
	if (p)
	{
		r_reverse(p, p->next);
		p->next = q;
	}
	else
	{
		first = q;
	}

}

void concat(struct node *p, struct node *q)
{
	third = p; // aa ek line na samjani hji

	while (p->next != NULL)
		p = p->next;
	p->next = q;
}

void merge(struct node *p, struct node *q)
{
	struct node *last;
	if (p->data < q->data)/*jo p na node ni value small hoy q karta,
						to pela p insert thaase third naam na list ma*/
	{
		third = last = p;
		p = p->next;
		third->next = NULL;
	}
	else if (p->data > q->data)
	{
		third = last = q;
		q = q->next;
		third->next = NULL;
	}
	while (p && q)
	{	/*incase jo koi node bachi jai merge thavama to
		 aa loop chaale jya sudhi p && q NULL NA THAY*/
		if (p->data < q->data)
		{
			last->next = p;
			p = p->next;
			last->next;
		}
		else if (p->data > q->data)
		{
			last->next = q;
			last = q;
			q = q->next;
			last->next = NULL;
		}
	}
	if (p)
		last->next = p;
	if (q)
		last->next = q;
}

int isloop(struct node *f)
{
	struct node *p, *q;
	p = q = f;//means both-the p and q are at the same position i.e.first

	do {
		p = p->next;
		q = q->next;
		q = q ? q->next : q; //in lec he has written like q=q!=NULL?q->next:NULL;
	} while (p && q && p != q);

	if (p == q)
		return 1;
	else
		return 0;
}

int main()
{	//if some part is missing,find it in SinglyLinkedlist.c
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	struct node  *temp, *t1, *t2;
	int a[] = {1, 2, 3, 4, 5};
	int b[] = {6, 15, 20, 35, 45}; //for concat & merge
	create(a, 5);
	//insert(first, 3, 70);
	//reverse1(first);
	//display(first);

	/*t1 = first->next->next;
	t2 = first->next->next->next->next;
	t2->next = t1;*/
	//printf("If loop then will return 1 else 0: %d\n", isloop(first));
	/*for merge & concat*/
	/*create2(b, 5);//this is call by value,so aiya bhle b lakhyo, upar function ma a chalse
	concat(second, first);
	printf("Concatinated\n");
	display(third);
	printf("\n\n");*/

	/*printf("Merged!\n");
	merge(first, second);
	display(third);
	printf("\n\n");*/


	//display(first);
	//display(second);
	//printf("%d\n", issorted(first));
	//printf("Length of linkedlist is: %d\n", count(first));//or  rcount(first);
	//rdisplay(first);

// if (issorted(first))//just another way of writing
// {
// 	printf("Sorted\n");
// }
// else
// {
// 	printf("Not sorted\n");
// }

	//printf("Length of linkedlist is: %d\n", count(first));//or  rcount(first);
//rdisplay(first);
//printf("\nSum of elements in linkedlist is %d\n", sum(first));//or write rsum(first);
	//printf("\nMax is %d\n", max(first));//or write rmax(first)
// temp = lsearch(first, 3);
// if (temp)
// 	printf("\n%d is found \n", temp->data);
// else
// 	printf("Key not found\n");
//void sortinsert(first, 1);
	//reverse1(first);//r_reverse(NULL, first); reverse2(first);
	//printf("\n\n");

	reverse2(first);
	display(first);
	return 0;
}