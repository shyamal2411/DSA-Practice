// C++ program to find a pair with given sum x.
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next, *prev;
};

void pairSum(struct Node* head, int x) {
  struct Node* first = head;
  struct Node* second = head;

  while (second->next != NULL) {
    second = second->next;
  }
  bool found = false;

  while (first != second && second->next != first) {
    if ((first->data + second->data) == x) {
      found = true;
      cout << first->data << "," << second->data << "\n";

      first = first->next;
      second = second->prev;
    } else {
      if ((first->data + second->data) < x)
        first = first->next;

      else
        second = second->prev;
    }
  }

  if (found == false)
    cout << "No pair";
}

void insert(struct Node** head, int data) {
  struct Node* temp = new Node;
  temp->data = data;
  temp->next = temp->prev = NULL;
  if (!(*head))
    (*head) = temp;
  else {
    temp->next = *head;
    (*head)->prev = temp;
    (*head) = temp;
  }
}

int main() {
  struct Node* head = NULL;
  insert(&head, 9);
  insert(&head, 8);
  insert(&head, 6);
  insert(&head, 5);
  insert(&head, 4);
  insert(&head, 2);
  insert(&head, 1);
  int x = 7;

  pairSum(head, x);

  return 0;
}
