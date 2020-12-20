#include <bits/stdc++.h>
using namespace std;

class node {
 public:
  int data;
  node* next;
  node(int val) {
    data = val;
    next = NULL;
  }
};
void insert(node*& head, int val) {
  // here we're taking head as by reference & not by value,so used *&
  node* n = new node(val);
  if (head == NULL) {
    head = n;
  }

  node* t = head;
  while (t->next != nullptr) {
    t = t->next;
  }

  t->next = n;
}
void inserthead(node*& head, int val) {
  node* n = new node(val);
  n->next = head;
  head = n;
}

void display(node* head) {
  node* t = head;
  while (t != nullptr) {
    cout << t->data << "";
    t = t->next;
  }
  cout << endl;
}

bool search(node* head, int key) {
  node* t = heaed;
  while (t != nullptr) {
    if (t->data == key)
      return true;
    t = t->next;
  }
  return false;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, i, t, count = 0, j;

  node* head = nullptr;
  insert(head, 1);
  insert(head, 2);
  insert(head, 3);
  insert(head, 4);
  insert(head, 5);
  insert(head, 6);
  inserthead(head, 8);
  display(head);
  cout << search(head, 5);
  return 0;
}