#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* link;
};
struct node *top=NULL;

void push(int item);
int pop();
int peek();
int  isEmpty();
void display();
//int isFull();

int main()
{
	int choice, item,top;
	while (1)
	{
		printf("1.Push\n2.Pop\n3.Display item at the top\n4.Display all items of the stack.\n5.Quit\n");
		printf("Enter the choice: ");
		scanf("%d",&item);
	switch(choice)
	{
		case 1:
		printf("\nEnter the item to be pushed: ");
		scanf("%d", &item);
		push(item);
		break;

		case 2:
		item =pop();
		printf("Poped item is: %d\n",item);
		break;

		case 3:
		printf("Item at the top is: %d\n",peek());
		break;

		case 4:
		display();

		case 5:
		exit(1);
		default:
		printf("Wrong choice.\n");
	}//switch end
	}//while end
}//main end

void push(int item)
{	//int top;
	struct node *tmp;
	tmp =(struct node *)malloc(sizeof(struct node));
	if(tmp==NULL)
	{
		printf("Stack Overflow.\n");
		return;
	}
	tmp->info=item;
	tmp->link= top;

	top = tmp;
}//push ended

int pop()
{
	struct node *tmp;
	int item,top;
	if(isEmpty())
	{
		printf("Stack underflow.\n");
		exit(1);
	}
	tmp=top;
	item = tmp->info;
	top = top -> link;
	free(tmp);
	return item;
}//end of pop

int peek()
{
	if(isEmpty()){
		printf("Stack Underflow.\n");
		exit(1);
	}
	return top->info;
}//end of peek.

int isEmpty()
{
	if(top==NULL)
	{
		return 1;
	}
	else
	return 0;
}//end of isempty.

void display()
{
	struct node *ptr;
	ptr = top;
	if(isEmpty()){
		printf("Stack is Empty.\n");
		return;
	}
	printf("Stack elements: \n");
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->info);
		ptr= ptr->link;
	}
	printf("\n");
}//end of display.
