#include <bits/stdc++.h>
using namespace std;

struct node {
  int data;
  struct node* next;
  node(int data) {
    this->data = data;
    next = NULL;
  }
};
struct linkedlist {
  node* head;
  linkedlist() { head = NULL; }
  node* reverse(node* head) {
    if (head == NULL || head->next == nullptr)
      return head;

    // reverse the rest list and put
    // the first element at the end
    node* rest = reverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return rest;
  }
  void print() {
    struct node* temp = head;
    while (temp != nullptr) {
      cout << temp->data << " ";
      temp = temp->next;
    }
  }
  void push(int data) {
    node* temp = new node(data);
    temp->next = head;
    head = temp;
  }
};

int main() {
  linkedlist ll;
  ll.push(20);
  ll.push(30);
  ll.push(5);
  ll.push(98);
  ll.push(75);

  cout << "Given Linkedlist is: \n";
  ll.print();

  ll.head = ll.reverse(ll.head);

  cout << "\nReverse Linked List: \n";
  ll.print();
  return 0;
}