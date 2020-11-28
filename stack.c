#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int size;
	int top;
	int *s;
};
void create(struct stack *st)
{
	printf("Enter size:");
	scanf("%d", &st->size);
	st->top = -1;
	st->s = (int *)malloc(st->size * sizeof(int));
}

void display(struct stack st)/*this is not going to modify stack,so call by value, i.e. struct st*/
{

	for (int i = st.top; i >= 0; i--) { //aiya st.top ma bhul paiditi,"st." ntu lakhyu
		printf("%d\n", st.s[i]);
	}
	printf("\n");
}

void push(struct stack *st, int x)/*push should insert values in the same stack,so it has to be modified,
hence pass by reference i.e. stack *st*/
{
	if (st->top == st->size - 1)
		printf("Stack overflow");
	/*its going to return nothing so void function */
	else
	{
		st->top++;
		st->s[st->top] = x;
	}
}

int pop(struct stack *st)
{
	int x = -1;
	if (st->top == -1)
		printf("Stack underflow\n");
	else
	{
		x = st->s[st->top--];
	}
	return x;
}

int peek(struct stack st, int index)
{
	int x = -1;
	if (st.top - index + 1 < 0)
		printf("Invalid index \n");

	else
		x = st.s[st.top - index + 1];

	return x;
}

int isempty(struct stack st)
{
	if (st.top == -1)
		return 1;
	return 0;
}

int stacktop(struct stack st)
{
	if (!isempty(st))
		return st.s[st.top];
	return -1;
}

int isfull(struct stack st)
{
	return st.top = st.size - 1;
}
int main()
// {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

struct stack st;
int create(&st);
void push(&st, 10);
void push(&st, 20);
void push(&st, 30);
void push(&st, 40);
void push(&st, 50);
display(st);
printf("Peeked value is: %d\n", peek(st, 1));

}
