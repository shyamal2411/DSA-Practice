void removeloop(struct Node* loop, struct Node* head) {
  struct Node* p1 = loop;
  struct Node* p2 = loop;
  unsigned int k = 1, i;
  while (p1->next != p2) {
    p1 = p1->next;
    k++;
  }
  p1 = head;
  p2 = head;
  for (i = 0; i < k; i++)
    p2 = p2->next;

  while (p2 != p1) {
    p1 = p1->next;
    p2 = p2->next;
  }
  p2 = p2->next;
  while (p2->next != p1)
    p2 = p2->next;

  p2->next = NULL;
}

void detectloop(struct Node* head) {
  struct Node* fast = head;
  struct Node* slow = head;
  while (fast != NULL && fast->next != NULL) {
    fast = fast->next->next;
    slow = slow->next;
    if (fast == slow) {
      removeloop(slow, head);
    }
  }
  // if(fast==slow)
}

void removeTheLoop(Node* node) {
  if (node != NULL && node->next != NULL) {
    detectloop(node);
  }
}