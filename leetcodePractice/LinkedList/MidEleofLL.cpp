ListNode* middleNode(ListNode* head) {
  ListNode* fast = head;
  ListNode* slow = head;

  /*we simply traverse both node until fast reaches null and next node of fast
   * is null */
  while (fast != NULL && fast->next != NULL) {
    fast = fast->next->next;
    slow = slow->next;
  }
  return slow;
}