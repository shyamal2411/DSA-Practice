// Problem
// link:https://www.geeksforgeeks.org/reverse-doubly-linked-list-groups-given-size/
#include <bits/stdc++.h>

using namespace std;

struct Node {
  int data;
  Node *next, *prev;
};

Node* getNode(int data) {
  Node* new_node = (Node*)malloc(sizeof(Node));

  new_node->data = data;
  new_node->next = new_node->prev = NULL;
  return new_node;
}

void push(Node** head_ref, Node* new_node) {
  new_node->prev = NULL;

  new_node->next = (*head_ref);

  if ((*head_ref) != NULL)
    (*head_ref)->prev = new_node;

  (*head_ref) = new_node;
}

struct Node* reverse(struct Node* head, int k) {
  Node* next;
  Node* prev = NULL;
  // to keep a check on number of nodes reversed in particular cycle.
  int count = 0;

  Node* current = head;
  while (current != NULL && count < k) {
    // count< k to check and traverse only upto the size of k
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
    count++;  // Node processed
  }

  // above process is same as reversing LL question, below process is for this
  // question
  if (next != NULL)
    head->next = reverse(next, k);

  return prev;
}

void printList(Node* head) {
  while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
}

int main() {
  Node* head = NULL;

  push(&head, getNode(10));
  push(&head, getNode(9));
  push(&head, getNode(8));
  push(&head, getNode(7));
  push(&head, getNode(6));
  push(&head, getNode(5));
  push(&head, getNode(4));
  push(&head, getNode(3));
  push(&head, getNode(2));
  push(&head, getNode(1));

  int k = 4;
  cout << "Original list: ";
  printList(head);
  cout << "\nAfter " << k << " size rotation:";
  head = reverse(head, k);

  cout << "\nModified list: ";
  printList(head);

  return 0;
}
