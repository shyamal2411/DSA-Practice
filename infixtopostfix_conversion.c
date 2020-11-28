#include<stdio.h>
#include<stdlib.h>

struct node {
	char data;
	struct node *next;
}*top = NULL;

void push(char x)
{
	struct node *t;
	t = (struct node *)malloc(sizeof(struct node));

	if (t == NULL)
		printf("Stack is full!\n\n");
	else
	{
		t->data = x;
		t->next = top;
		top = t;
	}
}

char pop()
{
	struct node *t;
	char x = -1;

	if (top == NULL)
		printf("Stack is empty\n");
	else
	{
		t = top;
		top = top->next;//like p=p->next;
		x = t->data;
		free(t);
	}
	return x;
}

void display()
{
	struct node *p;
	p = top;
	while (p != NULL)
	{
		printf("%d", p->data);
		p = p->next;
	}
	printf("\n");
}
int isbalanced(char *exp)
{
	int i;
	for (i = 0; exp[i] != '\0'; i++)
	{
		if (exp[i] == '(')
			push(exp[i]);
		else if (exp[i] == ')')
		{
			if (top == NULL)
				return 0;
			pop();
		}
	}
	if (top == NULL)
		return 1;
	else
		return 0;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char *exp = "((a+b)*(c-d))";
	if (isbalanced(exp))
		printf("Balanced\n");
	else
		printf("NOT Balanced\n");
	return 0;
}
