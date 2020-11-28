#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
    int info;
    struct node *link;
} *top=NULL;

void push(int item);
int pop();
int peek();
void display();
int isEmpty();

int main()
{
  int choice, item;
  while (1) {
      printf("1.Push\n2.Pop\n3.Display item at the top\n4.Display all items\n5.Quit\n");
      printf("Enter the choice: ");
      scanf("%d",&choice);
    switch (choice) {
      case 1:
      printf("Enter the item to be pushed: ");

    }
  }
}
