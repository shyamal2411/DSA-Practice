class Solution {
 public:
  ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
    ListNode *cur1 = headA, *cur2 = headB;

    while (cur1 != cur2) {
      if (cur1 == NULL)
        cur1 = headB;
      else
        cur1 = cur1->next;
      if (cur2 == NULL)
        cur2 = headA;
      else
        cur2 = cur2->next;
    }
    return cur1;
  }
};

/*traverse the list until both the nodes of both lists get same value until
then, cur1=cur1 & likewise, finally return the node where while loop stopped.
https://youtu.be/u4FWXfgS8jw
*/