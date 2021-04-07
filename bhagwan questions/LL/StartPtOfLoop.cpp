class Solution {
 public:
  ListNode* detectCycle(ListNode* head) {
    ListNode *slow = head, *fast = head;

    while (slow != NULL && fast != NULL && fast->next != NULL) {
      // same as the previous question, apply floyd's algo
      slow = slow->next;
      // fast will move by 2 steps, slow will move by one step
      fast = fast->next->next;

      if (slow == fast) {
        fast = fast;  // loop exists if they meet at a node
        slow = head;

        while (slow != fast)
        // if they don't then move fast also by one step.
        // and once they meet, return any of the 2 pointers.
        {
          slow = slow->next;
          fast = fast->next;
        }
        return fast;
      }
    }
    // return null if there is no loop.
    return NULL;
  }
};