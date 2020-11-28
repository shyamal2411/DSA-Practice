#include<stdio.h>
#include<stdlib.h>


struct node {
	int data;
	struct node *next;
}*head;

void create (int a[], int n) {

	int i;
	struct node *t, *last;
	head = (struct node*)malloc(sizeof(struct node));
	head->data = a[0]; //these following 2 lines made the list circular
	head ->next = head;
	last = head;

	for (i = 1; i < n; i++)
	{
		t = (struct node*)malloc(sizeof(struct node));
		t->data = a[i];
		t->next = last->next;
		last->next = t;
		last = t;
	}
}

void display(struct node *p) //in tutorial it was h
{
	do
	{
		printf("%d", p->data); //prints node's data
		p = p->next; //goes on next node,means transverses
	} while (p != head); //while not equal to head that is the first node
}

void recusivedisplay(node *p)
{
	static int flag = 0; //as this is recursion, the flag variable will regenarate & access
	//a memory in stack, to not let hapen this either make flag variable as global variable or
	// make it static
	if (p != head || flag == 0) /*this will ensure that again when pointer p points to
head node that is the first node, it has to know that this is the second cycle & now program has to stop, so flag will increament & program won't move further*/
	{
		flag = 1; //as soon as flag enters, it has to be incremented to not let print the head again
		printf("%d", p->data);
		recusivedisplay(p->next);
	}
	flag = 0; //make the flag again zero to use it for further program,
//means to make program run again for future, if it remains to be flag =1, then won't work for further use.
}
int main()
{

	int a[] = {2, 3, 4, 5, 6};
	create(a, 5);
	display(head);
	return 0;
}
