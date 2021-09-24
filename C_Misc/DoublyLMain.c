#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
}*first = NULL;

void create(int A[], int n)/*new list banavvanu che atle arguement ma pela array lidho,
 pchi ketlu motu list banavvu che ana maate n lidho,arguements hamesha apdi requirement na according levani*/
{
	struct node *t, *last;
	int i;
	/*below 4 lines are for creating the first node*/
	first = (struct node *)malloc(sizeof (struct node));
	first->data = A[0]; //insert data to first node
	first->prev = first->next = NULL; //setting both null value
	last = first;//initial condition

	//to join nodes to the list,this is to create list-chain of nodes
	for (i = 1; i < n; i++)//i=1,bcoz A[0] is already first node
	{
		t = (struct node *)malloc(sizeof(struct node));
		t->data = A[i];
		t->next = last->next;//ek pchi ek nodes ne dhakko lagade,atle last->next karyu
		t->prev = last;/*nava node ne dhakko marva ni process*/
		last->next = t;
		last = t;
	}
}

void display(struct node *p) //show karavvu che atle arguement ma pointer
{	//basically transerve function with printf ;)
	while (p)//means jya sudhi p che list ma tya sudhi saachu-true atle tya sudhi chaalse
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

void insert (struct node *p, int index, int x)
{
	/*Time analysis: Time depends upon movement of p,so n,
	otherwise normally constant i.e. least or worst case is constant, max case is n*/
	struct node *t;
	int i;
	if (index < 0 || index > length (p)) //can be written as first also in place of p
		return;//printf("Index not found in the list\n");
	if (index == 0)
	{	//to insert node at first takes constant time
		t = (struct node *)malloc(sizeof(struct node));
		t->data = x; //to fill the data passed in the arguement
		t->prev = NULL;//bcoz its 0 index
		t->next = first; //0th index so
		first->prev = t;
		first = t;// this operation onwards first node is t.
	}
	else {
		for (i = 0; i < index - 1; i++)//index-1 bcoz,previous node sudhi p lai avvo pde,pointer change karva
			p = p->next;
		t = (struct node *)malloc(sizeof(struct node));
		t->data = x;
		t->prev = p;//aiya p atle previous node(index-1) vaado
		t->next = p->next;

		if (p->next)//means p no next null nthi ne, aa condition check karva,baki insert kem karvo node
			p->next->prev = t;//to check whether the next node is available or not, otherwise it wouldn't join
		p->next = t;
		/*now what does this p->next->prev mean?? This means that p->next means the next node,
		say r node, so p->next means r and r node's prev, is prev part of r, so it means that the previous part of the next
		node pointed by p.
		For further clarification refer https://www.learningcrux.com/video/mastering-data-structures-algorithms-using-c-andc/10/46  minute 7:30 onwards */


//p->next =t;this will not be done, if node inserted at last

		/*In this case 2 pointers are required, 4 links are modified,
		if inserting ar last only 3 links are modified*/

	}
}


int delete (struct node *p, int index)
{
	//struct node *q;
	int x = -1, i;
	if (index < 1 || index > length(p)) /*aiya list nu indexing 1 thi lidhu che, 0 thi nai*/
		return -1;	/*index 0 thi levu k 1 thi aa programmer prr depend kare, linkedlist ma,
		0th index no rule khali array maate j che*/

	if (index == 1) //means first node, 1st index
	{
		first = first->next;
		if (first)
			first->prev = NULL;

		x = p->data;
		free(p);
	}
	else { //case for node at some postion in list
		for (i = 0; i < index - 1; i++)
			p = p->next;
		p->prev->next = p->next;

		if (p->next) /*Do this only if there is node next to p*/
			p->next->prev = p->prev;
		x = p->data;
		free(p);
	}
	return x;
}


void reverse(struct node *p)
{
	struct node *temp;
	while (p != NULL)
	{	//swapping of pointers,interchanging the roles
		temp = p->next;
		p->next = p->prev;
		p->prev = temp;
		p = p->prev;

		if (p != NULL && p->next == NULL) //2 conditions to show that if p is not equal to null
		{
			first = p;
		}
	}
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int A[] = {10, 20, 30, 40, 50};
	create(A, 5);
	//printf("Length is: %d\n", length(first));
	//insert(first, 1, 55);
	delete(first, 1);
	//reverse(first);
	display(first);

	return 0;

}