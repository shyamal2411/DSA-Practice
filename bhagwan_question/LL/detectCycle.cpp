/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
 public:
  bool hasCycle(ListNode* head) {
    if (head == NULL || head->next == NULL)
      return false;

    ListNode* fast = head;
    ListNode* slow = head;

    /*the firt condition in while is when first encounters null, it should stop,
      and 2nd condition is for the rest of the list. */

    while (fast->next && fast->next->next) {
      fast = fast->next->next;
      // 2 pointer method, fast will move forward by 2 steps
      slow = slow->next;  // slow pointer will move by 1 step.
      if (fast == slow)   // if they ever meet at a node that means that there
                          // exists a loop.
        return true;      // if they never meet, then there's no loop.
    }
    return false;
  }
};

/*Learnt from TakeUForward's video
https://youtu.be/354J83hX7RI  */