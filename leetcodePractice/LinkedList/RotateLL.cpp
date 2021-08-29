/*Problem link:
https://www.geeksforgeeks.org/rotate-a-linked-list/  */
#include <bits/stdc++.h>
using namespace std;

class Node {
 public:
  int data;
  Node* next;
};

void rotate(Node** head_ref, int k) {
  if (k == 0)
    return;

  Node* curr = *head_ref;
  int count = 1;
  while (count < k && curr != NULL) {
    curr = curr->next;
    count++;
  }

  if (curr == NULL) {
    return;
  }

  Node* kthnode = curr;
  while (curr->next != NULL) {
    curr = curr->next;
  }
  curr->next = *head_ref;
  *head_ref = kthnode->next;
  kthnode->next = NULL;
}

void push(Node** head_ref, int new_data) {
  Node* new_node = new Node();
  new_node->data = new_data;
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}

void printList(Node* node) {
  while (node != NULL) {
    cout << node->data << " ";
    node = node->next;
  }
}

int main(void) {
  Node* head = NULL;

  for (int i = 60; i > 0; i -= 10)
    push(&head, i);

  cout << "Given LL: \n";
  printList(head);
  rotate(&head, 2);

  cout << "\n\nRotated LL: \n";
  printList(head);

  return (0);
}