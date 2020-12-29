// Add 1 to a linked list
#include <bits/stdc++.h>
using namespace std;

class Node {
 public:
  int data;
  Node* next;
};

/*new node with given data */
Node* newNode(int data) {
  Node* newNode = new Node;
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

Node* reverse(Node* head) {
  Node* prev = NULL;
  Node* current = head;
  Node* next;
  while (current != NULL) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  return prev;
}

/* Adds one to a linked lists and return the head node of resultant list */
Node* addOneUtil(Node* head) {
  // res is head node of the resultant list
  Node* res = head;
  Node *temp, *prev = NULL;

  int carry = 1, sum;

  while (head != NULL)  // while both lists exist
  {
    // Calculate value of next digit in resultant list.
    // The next digit is sum of following things
    // (i) Carry
    // (ii) Next digit of head list (if there is a
    // next digit)
    sum = carry + head->data;     // update carry for next calulation
    carry = (sum >= 10) ? 1 : 0;  // update sum if it is greater than 10
    sum = sum % 10;               // Create a new node with sum as data
    head->data = sum;             // Move head and second pointers to next nodes

    temp = head;
    head = head->next;
  }

  // if some carry is still there, add a new node to result list.
  if (carry > 0)
    temp->next = newNode(carry);

  return res;  // return head of the resultant list
}

// uses addOneUtil().
Node* addOne(Node* head) {
  head = reverse(head);     // Reverse linked list
  head = addOneUtil(head);  // Add one from left to right of reversed list
  return reverse(head);     // Reverse the modified list
}

void printList(Node* node) {
  while (node != NULL) {
    cout << node->data;
    node = node->next;
  }
  cout << endl;
}

int main(void) {
  Node* head = newNode(1);
  head->next = newNode(9);
  head->next->next = newNode(9);
  head->next->next->next = newNode(9);

  cout << "List is ";
  printList(head);

  head = addOne(head);

  cout << "\nResultant list is ";
  printList(head);

  return 0;
}
