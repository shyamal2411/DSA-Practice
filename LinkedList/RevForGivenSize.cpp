// CPP program to reverse a linked list in groups of given size
//!  REFER THIS VIDEO FOR EXPLANATION:
//!  https://www.youtube.com/watch?v=Of0HPkk3JgI and video of GFG
#include <bits/stdc++.h>
using namespace std;

/*
SPACE COMPLEXITY: O(1) because we're using only one dummy node
TIME COMPLEXITY: O(n).
*/
class Node {
 public:
  int data;
  Node* next;
};

/* Reverses the linked list in groups
of size k and returns the pointer
to the new head node. */
Node* reverse(Node* head, int k) {
  Node* current = head;  // to let it start the loop
  Node* next = NULL;
  Node* prev = NULL;
  int count = 0;

  /*reverse first k nodes of the linked list */
  while (current != NULL && count < k) {
    next = current->next;  // HERE WE GAVE COUNT<K IN WHILE LOOP
    // BECAUSE WE WILL BE CHANGES LINKS 2 TIMES FOR 3 ELEMENTS SO K-1 I.E.
    // COUNT<K AND NOT COUNT<=K
    current->next = prev;
    // this means that the node is added to the linkedlist in reversed order
    // the node which was next-became prev and this current node is not pointing
    // towards that previous node here, 7 is next of 6, but in reversed ll,
    // current->next=prev i.e. =6.
    prev = current;
    current = next;
    count++;
  }

  /* next is now a pointer to (k+1)th node
  Recursively call for the list starting from current.
  And make rest of the list as next of first node */
  if (next != NULL)
    head->next = reverse(next, k);

  /* prev is new head of the input list */
  return prev;
}

void push(Node** t, int new_data) {
  /* allocate node */
  Node* newNode = new Node();

  /* put in the data */
  newNode->data = new_data;

  /* link the old list off the new node */
  newNode->next = (*t);

  /* move the head to point to the new node */
  (*t) = newNode;
}

/* Function to print linked list */
void printList(Node* node) {
  while (node != NULL) {
    cout << node->data << " ";
    node = node->next;
  }
}

int main() {
  Node* head = NULL;

  push(&head, 9);
  push(&head, 8);
  push(&head, 7);
  push(&head, 6);
  push(&head, 5);
  push(&head, 4);
  push(&head, 3);
  push(&head, 2);
  push(&head, 1);
  /* Created Linked list is 1->2->3->4->5->6->7->8->9 */

  cout << "Given linked list \n";
  printList(head);
  head = reverse(head, 5);

  cout << "\nReversed Linked list \n";
  printList(head);

  return (0);
}
