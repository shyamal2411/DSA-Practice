class Solution {
 public:
  bool isPalindrome(ListNode* head) {
    if (head == NULL || head->next == NULL)
      return true;
    // null linkedlist is palindrome in itself.

    ListNode* slow = head;
    ListNode* fast = head;

    // iterate until fast reaches last or second last node.
    while (fast->next != NULL && fast->next->next != NULL) {
      slow = slow->next;  // ultimately slow will be standing at the middle of
                          // the linkedlist.
      fast = fast->next->next;
    }

    slow->next =
        reverseLL(slow->next);  // reverse the right-half of the linkedlist.

    slow = slow->next;

    while (slow != NULL) {
      if (head->val != slow->val)
        return false;

      head = head->next;
      slow = slow->next; 
    }
    return true;
  }

  ListNode* reverseLL(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* next = NULL;
    while (head != NULL) {
      next = head->next;
      head->next = prev;
      prev = head;
      head = next;
    }
    return prev;
  }
};