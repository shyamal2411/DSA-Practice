#include<iostream>
using namespace std;

class Node{

public:
  int data;
  Node *link;
};

void push(Node **head_ref,int new_data)
{
  /*Allocating node*/ 
  Node* new_node= new Node();

  /*putting data */
   new_node->data =new_data;

  /*make next of new node as head*/
  new_node->link=(*head_ref);

  /*Move the head to point to new node*/
  (*head_ref) =new_node;
}
