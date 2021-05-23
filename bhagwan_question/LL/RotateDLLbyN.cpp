// problem link:https://www.geeksforgeeks.org/rotate-doubly-linked-list-n-nodes/
#include <bits/stdc++.h>
using namespace std;

struct Node {
  char data;
  struct Node* prev;
  struct Node* next;
};

void rotate(struct Node** head_ref, int N) {
  if (N == 0)
    return;

  struct Node* curr = *head_ref;       // create pointer for rotating nodes
  int count = 1;                       // set counter to traverse until N
  while (count < N && curr != NULL) {  // reach current upto that node
    curr = curr->next;
    count++;
  }
  if (curr == NULL)  // if its last node, return
    return;

  struct Node* nthNode =
      curr;  // nthnode is the node before which nodes are to be traversed
             // once current is assigned to nthnode, traverse current to the
             // end, as now we need to join those n nodes
  while (curr->next != NULL) {
    curr = curr->next;
  }

  curr->next = *head_ref;
  (*head_ref)->prev = curr;
  *head_ref = nthNode->next;
  (*head_ref)->prev = NULL;
  nthNode->next = NULL;
}

void push(struct Node** head_ref, int new_data) {
  struct Node* newNode = new Node;
  newNode->data = new_data;
  newNode->prev = NULL;
  newNode->next = (*head_ref);
  if ((*head_ref) != NULL)
    (*head_ref)->prev = newNode;
  *head_ref = newNode;
}

void printList(struct Node* node) {
  while (node->next != NULL) {
    cout << node->data << " "
         << "<=>"
         << " ";
    node = node->next;
  }
  cout << node->data;
}

int main(void) {
  struct Node* head = NULL;

  /*linked list a<->b<->c<->d<->e */
  push(&head, 'e');
  push(&head, 'd');
  push(&head, 'c');
  push(&head, 'b');
  push(&head, 'a');

  int N = 2;

  cout << "Given linked list \n";
  printList(head);
  rotate(&head, N);

  cout << "\nRotated Linked list \n";
  printList(head);

  return 0;
}
