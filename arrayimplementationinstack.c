#include<stdio.h>
#include<stdlib.h>
#define max 10
int stack_arr[max];
int top =-1;
void push(int item);
int peek();
int pop();
int isEmpty();
void display();
int choice, item;

int main()
{
	while(1)
	{
		printf("1.Push\n2.pop\n3.display the top element\n4.display all stack elements\n5.Quit\n\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("Enter the item to be pushed: \n");
			scanf("%d",&item);
			push(item);
			break;

			case 2:
			item=pop();
			printf("Popped item is: %d\n",item);
			break;

			case 3:
			printf("Item at the top is: ",peek());
			break;

			case 4:
		   display();
			 break;

			case 5:
			exit(1);
		}		   //switch ended
	}//while ended
}//main ended

void push(int item)
{
	if(isFull()){
	printf("Stack Overflow\n");
	exit(1);
	}
	top =top+1;
	stack_arr[top] =item;
} //end of Push

int pop()
{
	int item;
	if(isEmpty())
	{
		printf("Stack Underflow\n");
		exit(1);
	}
	 item =stack_arr[top];
	 top = top -1;
	 return item;
} // end of pop

int peek()
{
	if(isEmpty())
	{
		printf("Stack Underflow\n");
		exit(1);
	}
	return stack_arr[top];
}//end of peek

int isEmpty()
{
	if(top==-1)
			return 1;
		else
		return 0;
}//end of isEmpty

int isFull()
{
	if(top == max-1)
	return 1;
	else
	return 0;
}//end is Full

      void display()
	  {
		  int i;
		  if(isEmpty()){
			  printf("Stack is empty.\n");
			  return;
		  }
	  printf("Stack elements are: \n\n");
	  for(i=top; i>=0; i--)
	  {
		  printf("%d\n",stack_arr[i]);
	  	  }	  printf("\n");

	  }//end of display
