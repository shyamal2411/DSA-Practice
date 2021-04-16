bool isCircular(Node* head) {
  // if no linkedlist then return true
  if (head == NULL)
    return true;
  // create new node pointer
  Node* node = head->next;
  // traverse it and check the conditions in loop
  while (node != NULL && node != head)
    node = node->next;
  // if node meets head during traversal then it is circular LL
  if (node == head)
    return true;
  // if not then it is simple ll, here to stop the loop- if it is not circular,
  // we have 2 conditions in loop.
  else
    return false;
}

/*submitted on GFG.*/