// C++ program to find middle of linked list
#include <bits/stdc++.h>
using namespace std;

// Struct
struct Node {
  int data;
  struct Node* next;
};
// METHOD 1: FLOYD'S ALGORITHM
void printMiddlefloyd(struct Node* head) {
  struct Node* slow = head;
  struct Node* fast = head;

  if (head != NULL) {
    while (fast != NULL && fast->next != NULL) {
      fast = fast->next->next;
      slow = slow->next;
    }
    cout << "Mid Element:  [" << slow->data << "]\n\n";
  }
}
// METHOD 2: HEAD AS MID
void printMiddleMid(struct Node* head) {
  int count = 0;
  struct Node* mid = head;

  while (head != NULL) {
    if (count & 1)  // if count is odd
      mid = mid->next;

    count++;
    head = head->next;
  }
  if (mid != NULL)
    cout << "Mid Element: [" << mid->data << "]\n\n";
}

void push(struct Node** head_ref, int newData) {
  struct Node* newNode = new Node;
  newNode->data = newData;
  newNode->next = (*head_ref);
  (*head_ref) = newNode;
}

void printList(struct Node* ptr) {
  while (ptr != NULL) {
    printf("%d->", ptr->data);
    ptr = ptr->next;
  }
  printf("NULL\n");
}

int main() {
  struct Node* head = NULL;

  for (int i = 5; i > 0; i--) {
    push(&head, i);
    printList(head);

    printMiddlefloyd(head);
    // printMiddleMid(head);
  }

  return 0;
}
