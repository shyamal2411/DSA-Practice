class Solution {
 public:
  ListNode* deleteDuplicates(ListNode* head) {
    ListNode* current = head;
    while (current && current->next) {
      ListNode* nextNode = current->next;
      if (current->val == nextNode->val)
        current->next = nextNode->next;
      else
        current = nextNode;
    }
    return head;
  }
};

/* traverse through the list, if value of curr & val of next are equal then
   current's next will be nextnode's next i.e. delete the node, do this until
   current & current next are present, at last, as we only have head of LL,
   return head.*/