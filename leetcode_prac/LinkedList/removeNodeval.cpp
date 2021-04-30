class Solution {
 public:
  ListNode* removeElements(ListNode* head, int val) {
    // if no linkedlist, return head
    if (head == NULL)
      return head;

    // traverse till the node to be deleted.
    while (head != NULL && head->val == val) {
      head = head->next;
    }

    ListNode* current = head;
    ListNode* prev = NULL;

    while (current != NULL) {
      if (current->val == val) {
        prev->next = current->next;  // current na next ne prev no next banavi
                                     // do, so the current node gets unlisted.
        current = current->next;  // now the past prev became present current.
                                  // deleting the node
      } else {
        prev = current;
        current = current->next;
      }
    }
    return head;
  }
};