#include <bits/stdc++.h>
using namespace std;
// written on my own after referring from GFG
// https://www.geeksforgeeks.org/reverse-a-linked-list/
struct node {
  int data;
  struct node* next;
  node(int data) {
    this->data = data;
    next = NULL;
  }
};

struct Linkedlist {
  node* head;
  Linkedlist() {
      head = NULL;
       }
  
  
  void reverse() {
    node* current = head;
    node *prev = NULL, *next = NULL;
    while (current != NULL) {
      next = current->next;//shift next to next node.
      current->next = prev;//now bring that next pointer to the previous node to making it follow reverse order list.
      prev = current;// make it current
      current = next;
    }//while loop
    head = prev;
  }//end of reverse
  void print() {
    struct node* temp = head;
    while (temp != NULL) {
      cout << temp->data << " ";
      temp = temp->next;
    }//while loop
  }//end of print
  void push(int data) {
    node* temp = new node(data);
    temp->next = head;
    head = temp;
  }//end of push
};  //end of struct linkedlist

int main() {
  Linkedlist ll;
  ll.push(20);
  ll.push(90);
  ll.push(8);
  cout << "Given Linkedlist is: \n";
  ll.print();
  ll.reverse();

  cout << "\nReversed Linkedlist is: \n";
  ll.print();
  return 0;
}
