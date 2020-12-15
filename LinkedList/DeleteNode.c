// A complete working C program to delete a node in a linked list
// at a given position
#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct Node {
  int data;
  struct Node* next;
};

/* Given a reference (pointer to pointer) to the head of a list
and an int inserts a new node on the front of the list. */
void push(struct Node** p, int new_data) {
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = new_data;
  newNode->next = (*p);
  (*p) = newNode;
}

/* Given a reference (pointer to pointer) to the head of a list
and a position, deletes the node at the given position */
void deleteNode(struct Node** p, int pos) {
  //* If linked list is empty
  if (*p == NULL)
    return;
  // Store head node
  struct Node* temp = *p;

  //* DELETING THE HEAD NODE I.E. THE FIRST NODE.
  // If head needs to be removed
  if (pos == 0) {     // pos==0 means the 0th index.
    *p = temp->next;  // Change head
    free(temp);       // free old head
    return;
  }

  //* DELETING FROM A GIVEN NODE
  // Find previous node of the node to be deleted
  for (int i = 0; temp != NULL && i < pos - 1; i++)
    // Traverse till the previous node w.r.t the node to be deleted
    // therefore, i < pos-1
    temp = temp->next;

  // If position is more than number of nodes
  if (temp == NULL || temp->next == NULL)
    return;  // if nodes in the linkedlist are 7 and user inputs 10.

  // Node temp->next is the node to be deleted
  // Store pointer to the next of node to be deleted
  struct Node* next = temp->next->next;

  free(temp->next);   // Unlink the node from linked list
  temp->next = next;  // Unlink the deleted node from list
}

void printList(struct Node* node) {
  while (node != NULL) {
    printf(" %d ", node->data);
    node = node->next;
  }
}

/* Driver program to test above functions*/
int main() {
  /* Start with the empty list */
  struct Node* head = NULL;

  push(&head, 7);
  push(&head, 1);
  push(&head, 3);
  push(&head, 2);
  push(&head, 8);

  puts("Created Linked List: ");
  printList(head);
  puts("\nLinked List after Deletion at pos 4: ");
  deleteNode(&head, 4);
  printList(head);
  return 0;
}
