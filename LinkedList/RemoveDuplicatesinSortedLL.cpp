/* C++ Program to remove duplicates from a sorted linked list */
#include <bits/stdc++.h>
using namespace std;

class Node {
 public:
  int data;
  Node* next;
};

void removeDuplicates(Node* head) {
  Node* current = head;
  Node* nextTonext;

  if (current == NULL)
    return;

  while (current->next != NULL) {
    if (current->data == current->next->data) {
      nextTonext = current->next->next;
      delete current->next;
      current->next = nextTonext;
    } else {
      current = current->next;
    }
  }
}

// LEETCODE PROBLEM SOLUTION.

/*class Solution {
 public:
  ListNode* deleteDuplicates(ListNode* head) {

    ListNode* current = head;

      while (current && current->next) {
      ListNode* nextNode = current->next;
      if (current->val == nextNode->val)
        current->next = nextNode->next;
      else
        current = nextNode;
    }
    return head;
  }
};

/* traverse through the list, if value of curr & val of next are equal then
   current's next will be nextnode's next i.e. delete the node, do this until
current & current next are present, at last, as we only have head of LL, return
head.*/

void push(Node** head_ref, int new_data) {
  Node* new_node = new Node();

  new_node->data = new_data;

  new_node->next = (*head_ref);

  (*head_ref) = new_node;
}

void printList(Node* node) {
  while (node != NULL) {
    cout << " " << node->data;
    node = node->next;
  }
}

int main() {
  Node* head = NULL;

  push(&head, 10);
  push(&head, 7);
  push(&head, 7);
  push(&head, 4);
  push(&head, 4);
  push(&head, 2);

  cout << "LL Before:\n";
  printList(head);
  removeDuplicates(head);
  cout << "\n\nLL After:\n";
  printList(head);

  return 0;
}
