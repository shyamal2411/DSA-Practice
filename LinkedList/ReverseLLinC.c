#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node* next;

};
struct node* head;

void reverse()
{
    struct node *temp,*prev;
    temp=head;
    prev=nullptr;
    while(temp!=nullptr)
    {
        temp->next=prev;

    }
}
int main()
{

}