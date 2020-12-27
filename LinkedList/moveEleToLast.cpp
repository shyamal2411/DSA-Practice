/* CPP Program to move last element to front in a given linked list */
#include <bits/stdc++.h>
using namespace std;
/*Time Complexity: O(n)*/
class Node {
 public:
  int data;
  Node* next;
};

/* We are using a double pointer head here because we change head of the linked
list inside this function.*/
/*Since the function will not return anything, it will only modify the LL, so we
 * use void here */
void moveToFront(Node** head) {
  /* If linked list is empty,  it contains only one node,then nothing needs to
   * be done, simply return */
  if (*head == NULL || (*head)->next == NULL)
    return;

  /* Initialize second last and last pointers */
  Node* secLast = NULL;
  Node* last = *head;

  /*After this loop secLast contains address of second last node and last
   * contains address of last node in Linked List */
  while (last->next != NULL) {
    secLast = last;
    last = last->next;
  }

  /* Set the next of second last as NULL */
  secLast->next = NULL;

  /* Set next of last as head node */
  last->next = *head;

  /* Change the head pointer
  to point to last node now */
  *head = last;
}

/* UTILITY FUNCTIONS */
/* Function to add a node
at the beginning of Linked List */
void push(Node** head, int newData) {
  /* allocate node */
  Node* newNode = new Node();

  /* put in the data */
  newNode->data = newData;

  /* link the old list off the new node */
  newNode->next = (*head);

  /* move the head to point to the new node */
  (*head) = newNode;
}

/* Function to print nodes in a given linked list */
void printList(Node* node) {
  while (node != NULL) {
    cout << node->data << " ";
    node = node->next;
  }
}

/* Driver code */
int main() {
  Node* start = NULL;

  /* The constructed linked list is:
  1->2->3->4->5 */
  push(&start, 5);
  push(&start, 4);
  push(&start, 3);
  push(&start, 2);
  push(&start, 1);

  cout << "Linked list before moving last to front: \n";
  printList(start);

  moveToFront(&start);

  cout << "\nLinked list after removing last to front: \n";
  printList(start);

  return 0;
}

// This code is contributed by rathbhupendra
