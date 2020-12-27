#include <bits/stdc++.h>
using namespace std;
// Practice program of moveEleToLast.cpp
class node {
 public:
  int data;
  node* next;  // since it is singly linkedlist
};

void movefront(node** head) {
  if (*head == NULL || (*head)->next == NULL)
    return;

  node* seclast = NULL;
  node* last = *head;

  while (last->next != nullptr) {
    seclast = last;  // jyare last node prr pointer avi jaay tyare
    last = last->next;
  }
  seclast->next = NULL;
  last->next = *head;
  *head = last;
}

void push(node** head, int newData) {
  node* newnode = new node();
  newnode->data = newData;
  newnode->next = (*head);
  (*head) = newnode;
}

void printlist(node* node) {
  while (node != NULL) {
    cout << node->data << " ";
    node = node->next;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  node* start = NULL;
  push(&start, 4);
  push(&start, 5);
  push(&start, 6);
  push(&start, 8);
  push(&start, 0);

  cout << "Linkedlist before moving last to front: \n";
  printlist(start);
  movefront(&start);

  cout << "\nLinkedlist after moving last to front: \n";
  printlist(start);
  return 0;
}