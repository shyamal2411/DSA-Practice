#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

//insert new node in front of list.
void push(struct node** head,int node_data)
  //** is pointer to pointer variable,basically points to the
  //value of head. for further revision,refer from book.
{
  struct node* new_node = new node;  //create & allocate node.
                            /*here new_node is accessing the value,means it has been allocated the value*/
  new_node->data = node_data; //assign data to node.
new_node->next = (*head); //set next of new node as head.
(*head) = new_node; //move the head to point to new node.
}

//insert  new node after given node.
void insertafter(struct node* prev_node,int node_data)
{
  if(prev_node==NULL) //check if previous node is NULL or not.
  {cout<<"Given node is required,cannot be NULL";  return;}
  struct node* new_node=new node; // create & allocate new node.
  new_node->data = node_data; //assign data to the node.
  new_node->next =prev_node->next;  //move next of previous as new node.
}

void append(struct node** head, int node_data)
{
  struct node* new_node=new node;
  struct node* last = *head;

  new_node->data = node_data;
  new_node->next =NULL;
  if(*head == NULL)
  {*head= new_node; return;}

  while (last->next!=NULL)
  last =last->next;
//int)::Node' in initialization
struct node last = head;
  last->next=new_node;
  return;
}

void display(struct node *node)
{
  while(node!=NULL)
  {
    cout<<node->data<<"-->";
    node =node->next;
  }
  if(node == NULL)
  cout<<"NULL";
}
// 'last' was not declared in this scope

int main()
{
  struct node *head =NULL;

  append (&head,10); //Insert 10
  push(&head,20); //Insert at beginning.
  push(&head,30); //Insert at beginning.
  append(&head,40); //Insert 40 at end.
  insertafter(head->next,50);

  cout<<"Final linkedlist: "<<endl;
  display(head);

  return 0;
}
