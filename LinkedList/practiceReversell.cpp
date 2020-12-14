#include <bits/stdc++.h>
using namespace std;
struct node {
  int data;
  struct node* next;
  node(int data) {
    this->data = data;
    next = NULL;
  }
};

struct linkedlist
{
    node* head;
    linkedlist()
    {
        head=NULL;
    }
void reverse()
{
    node* current =head;
    node* prev=nullptr,*next=nullptr;
    while(current!=nullptr)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}
void push(int data)
{
    node* temp=new node(data);
    temp->next=head;
    head=temp;
}
};//end of linkedlist struct
int main() {
  linkedlist ll;
  ll.push(20);
  ll.push(1);
  ll.push(7);
  ll.push(94);
  ll.push(56);
}