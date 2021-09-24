#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;	//data storing part of node		/*struct declaring section*/
	struct node *link; //link pointer for pointing the next n

}*front =NULL, *rear =NULL; // as it is queue, we declare front,rear pointers.

	void insert (int item);
	int del();
	int peek();				/*function declaring section*/
	int isEmpty();
	void display();


int main()
{
	int choice,item;
	while(1)
	{
		printf("1.Insert\n2.Delete\n3.Display element at the front\n4.Display all the elements of the queue\n5.Done with the program.\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);

			switch(choice)
			{
				case 1:
				insert(item);
				break;

				case 2:
				item = del();
				printf("Deleted element is %d\n",item);

				case 3:
				printf("Element at the front is %d\n",peek());
				break;

				case 4:
				display();
				break;

				case 5:
				exit(1);
				default:
				printf("Wrong choice\n");

			}//end of switch.
	}//end of while.
}//end of main.

void insert(int item)
{
	printf("Input the element for adding in queue: ");
	scanf("%d",&item);
	struct node *tmp;
	tmp= (struct node *)malloc(sizeof(struct node));
	if(tmp ==NULL)
	{
		printf("Memory not available.\n");
		return;
	}
	tmp->info= item;
	tmp->link =NULL;
if(front==NULL) //in case if queue is empty.
	front =tmp;
else
	rear->link =tmp;
	rear =tmp;
}//end of insert.

 int del()
 {
	 struct node *tmp;
	 int item;
	 if(isEmpty()){
		 printf("Queue Underflow.\n");
		 exit(1);
	 }
	 tmp=front;
	 item =tmp->info;
	 front= tmp->link;
	 front = front->link;
	 free(tmp);
	 return item;
 }//delete function ends.

 int peeks()
 {
	 if(isEmpty()){
		 printf("Queue Underflow.\n");
		 exit(1);
	 }
	 return front->info;
 }//end peeks()

 int isEmpty()
 {
	if(front ==NULL)
		 return 1;
	 else
	 return 0;
 }//end of empty.

 void display()
 {
	 struct node *ptr;
	 ptr =front;
	 if(isEmpty())
	 {
		 printf("Queue is empty.\n");
		 return;
	 }
	 printf("Queue elements: \n\n");
	 while(ptr!=NULL)
	 {
		 printf("%d",ptr->info);
		ptr=ptr->link;
	 }
	 printf("\n\n");
 } //end of Display.
