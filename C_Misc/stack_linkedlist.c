#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node *next;
}*top=NULL;


void push(int x)
{
    struct node *t;
    t=(struct node* )malloc(sizeof(struct node));

    if(t==NULL)
    printf("Stack is full\n");

    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}
int pop()
{   struct node *t;
    int x=-1;
    if(top=NULL)
    printf("Stack is empty.\n");
    else
    {
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}

void display()
{
    struct node *p;
    while(p!=NULL)
    {
            printf("%d\t",p->data);
            p=p->next;
    }
    printf("\n");
}
int main()
{
    push(10);
    push(20);
    push(30);
    display();
    
    printf("%d",pop());

return 0;
}