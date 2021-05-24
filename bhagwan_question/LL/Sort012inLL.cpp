// Problem link:
// https :  // www.geeksforgeeks.org/sort-linked-list-0s-1s-2s-changing-links/
// https://www.geeksforgeeks.org/sort-a-linked-list-of-0s-1s-or-2s/
#include <bits/stdc++.h>

struct Node {
  int data;
  struct Node* next;
};

Node* newNode(int data);

// METHOD 1: CHANGING DATA OF NODES
void sortListeasy(Node* head) {
  int count[3] = {0, 0, 0};  // count for 0,1,2.
  Node* ptr = head;

  while (ptr != NULL) {
    count[ptr->data] += 1;
    ptr = ptr->next;
  }
  int i = 0;
  ptr = head;

  while (ptr != NULL) {
    if (count[i] == 0)
      i++;

    else {
      ptr->data = i;
      count[i]--;
      ptr = ptr->next;
    }
  }
}

// METHOD2: HARD
// CHANGING LINKS METHOD
Node* sortList(Node* head) {
  if (!head || !(head->next))
    return head;

  Node* zerod =newNode(0);  // to avoid null checks, we put 0 in arguemnt of newNode.
  Node* oned = newNode(0);
  Node* twod = newNode(0);

  Node *zero = zerod, *one = oned, *two = twod;

  Node* current = head;
  /*basically the idea is, make 3 dummy nodes, add all the links of 0,1,2 into
   them, join them to dummy nodes in this below while loop, after adding them,
   link 0's list to 1's list & finally 2's list, after joining delete dummy
   people.*/
  while (current) {
    if (current->data == 0) {
      zero->next = current;
      zero = zero->next;
      current = current->next;
    } else if (current->data == 1) {
      one->next = current;
      one = one->next;
      current = current->next;
    } else {
      two->next = current;
      two = two->next;
      current = current->next;
    }
  }
  // attaching work of these lists.
  zero->next = (oned->next) ? (oned->next) : (twod->next);
  one->next = twod->next;
  two->next = NULL;  // 2's list is last, so NULL at the last.

  head = zerod->next;  // 0 list is heading, so head to 0.

  // delete dummy people
  delete zerod;
  delete oned;
  delete twod;

  return head;  // return new head (0's head).
}

Node* newNode(int data) {
  Node* newNode = new Node;

  newNode->data = data;
  newNode->next = NULL;
}

void printList(struct Node* node) {
  while (node != NULL) {
    printf("%d ", node->data);
    node = node->next;
  }
  printf("\n");
}

int main() {
  Node* head = newNode(1);
  head->next = newNode(2);
  head->next->next = newNode(0);
  head->next->next->next = newNode(0);
  head->next->next->next->next = newNode(1);
  head->next->next->next->next->next = newNode(2);

  printf("Linked List Before Sorting\n");
  printList(head);

  head = sortList(head);  // WITH CHANDING LINKS
  //   sortListeasy(head); //WITH CHANGING DATA

  printf("Linked List After Sorting\n");
  printList(head);

  return 0;
}
