#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];

class Node {
 public:
  int data;
  Node* next;
};

Node* newNode(int data) {
  Node* new_node = new Node;
  new_node->data = data;
  new_node->next = NULL;
  return new_node;
}

Node* reverse(Node* head) {
  Node* prev = NULL;
  Node* current = head;
  Node* next;
  while (current) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  return prev;
}

Node* addoneutil(Node* head) {
  Node* res = head;
  Node *temp, *prev = NULL;
  int carry = 1, sum = 0;
  while (head) {
    sum = carry + head->data;
    if (sum >= 10)
      carry = 1;
    else
      carry = 0;
    // also written as carry=(sum>=10)? 1:0;

    sum %= 10;
    head->data = sum;
    temp = head;
    head = head->next;
  }
  if (carry > 0)
    temp->next = newNode(carry);

  return res;
}

Node* addOne(Node* head) {
  head = reverse(head);
  head = addoneutil(head);
  return reverse(head);
}

void printlist(Node* node) {
  while (node) {
    cout << node->data;
    node = node->next;
  }
  cout << endl;
}

int main() {
  Node* head = newNode(1);
  head->next = newNode(2);
  head->next->next = newNode(3);
  head->next->next->next = newNode(4);
  cout << "Before:\t\n";
  printlist(head);
  head = addOne(head);
  cout << "After:\t\n";
  printlist(head);
  return 0;
}