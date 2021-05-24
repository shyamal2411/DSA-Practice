// Problem link:
// https://www.geeksforgeeks.org/multiply-two-numbers-represented-linked-lists/

#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
#define long long int
const int N = 1e9 + 7;
struct Node {
  int data;
  struct Node* next;
};

struct Node* newNode(int data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = data;
  new_node->next = NULL;
  return new_node;
}

void push(struct Node** head_ref, int new_data) {
  struct Node* new_node = newNode(new_data);

  new_node->next = (*head_ref);

  (*head_ref) = new_node;
}

int multiplyTwoLists(Node* first, Node* second) {
  int n1 = 0, n2 = 0;

  while (first || second) {
    if (first) {
      n1 = ((n1)*10) % N + first->data;
      first = first->next;
    }
    if (second) {
      n2 = ((n2)*10) % N + second->data;
      second = second->next;
    }
  }
  return ((n1 % N) * (n2 % N)) % N;
}

void printList(struct Node* node) {
  while (node != NULL) {
    cout << node->data;
    if (node->next)
      cout << "->";
    node = node->next;
  }
  cout << "\n";
}

int main() {
  struct Node* first = NULL;
  struct Node* second = NULL;

  push(&first, 1);
  push(&first, 2);
  push(&first, 3);
  printf("First List is: ");
  printList(first);

  push(&second, 2);
  push(&second, 1);
  printf("Second List is: ");
  printList(second);

  cout << "Result is: ";
  cout << multiplyTwoLists(first, second);

  return 0;
}
