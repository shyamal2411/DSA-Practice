// C++ program to detect and remove loop in linked list
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
  int data;
  struct Node* next;
};

/* Function to remove loop.
Used by detectAndRemoveLoop() */
void removeLoop(struct Node*, struct Node*);

int detectandremove(struct Node* list) {
  struct Node *slow = list, *fast = list;
  while (slow && fast && fast->next)  // floyd 's standard algo to detect loop'
  {
    slow = slow->next;
    fast = fast->next->next;

    if (slow = fast) {         // loop detected
      removeLoop(slow, list);  // now remove loop will do its work from this slow pointed node, where loop is found.
      return 1;                // says that loop is detected.
    }
  }
  return 0;
}

void removeLoop(struct Node* loopNode, struct Node* head) {
  struct Node* p1;
  struct Node* p2;

  p1 = head;
  while (1) {
    p2 = loopNode; /*here loopnode passed as an arguement is the slow pointer at
                      which we found the loop & we stopped*/
    while (p2->next != loopNode && p2->next != p1) {
      p2 = p2->next;
    }

    if (p2->next == p1)
      break;

    p1 = p1->next;
  }
  p2->next = NULL;
}

void printList(struct Node* node) {
  while (node != NULL) {
    cout << node->data << " ";
    node = node->next;
  }
}

struct Node* newNode(int key) {
  struct Node* temp = new Node();
  temp->data = key;
  temp->next = NULL;
  return temp;
}

int main() {
  struct Node* head = newNode(50);
  head->next = newNode(20);
  head->next->next = newNode(15);
  head->next->next->next = newNode(4);
  head->next->next->next->next = newNode(10);
  head->next->next->next->next->next = head->next->next;

//   cout << "Linked List before removing loop\n";
//   printList(head);

  detectandremove(head);
  cout << "\nLinked List after removing loop\n";
  printList(head);
  return 0;
}
