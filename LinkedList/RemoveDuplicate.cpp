/* C++ Program to remove duplicates from a sorted linked list */
#include <bits/stdc++.h>
using namespace std;

class Node {
 public:
  int data;
  Node* next;
};

/* The function removes duplicates from a sorted list */
void removeDuplicates(Node* head) {
  /* Pointer to traverse the linked list */
  Node* current = head;

  /* Pointer to store the next pointer of a node to be deleted*/
  Node* next_next;

  /* do nothing if the list is empty */
  if (current == NULL)
    return;

  /* Traverse node*/
  while (current->next != NULL) {
    /* Compare current with next */
    if (current->data == current->next->data) {
      //! The sequence of steps is important*/
      next_next = current->next->next;
      free(current->next);
      current->next = next_next;
     } else  //! Only advance if no deletion */
    {
      current = current->next;
    }
  }
}

/* Function to insert a node at the beginging of the linked list */
void push(Node** head_ref, int new_data) {
  /* allocate node */
  Node* newNode = new Node();

  newNode->data = new_data; /* put in the data */

  newNode->next = (*head_ref); /* link the old list off the new node */

  (*head_ref) = newNode; /* move the head to point to the new node */
}

/* Function to print nodes in a given linked list */
void printList(Node* node) {
  while (node != NULL) {
    cout << " " << node->data;
    node = node->next;
  }
}

/* Driver program to test above functions*/
int main() {
  /* Start with the empty list */
  Node* head = NULL;

  /* Let us create a sorted linked list to test the functions
  Created linked list will be 11->11->11->13->13->20 */
  push(&head, 20);
  push(&head, 13);
  push(&head, 13);
  push(&head, 11);
  push(&head, 11);
  push(&head, 11);

  cout << "Linked list before duplicate removal ";
  printList(head);

  /* Remove duplicates from linked list */
  removeDuplicates(head);

  cout << "\nLinked list after duplicate removal ";
  printList(head);

  return 0;
}
