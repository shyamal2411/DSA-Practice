class Solution {
 public:
  ListNode* sortList(ListNode* head) {
    if (head == NULL || head->next == NULL)
      return head;

    ListNode* fast = head->next;
    ListNode* slow = head;

    while (fast != NULL && fast->next != NULL) {
      fast = fast->next->next;
      slow = slow->next;
    }

    fast = slow->next;  // divide into 2 parts
    slow->next = NULL;

    return merge(sortList(head), sortList(fast));
  }

  ListNode* merge(ListNode* list1, ListNode* list2) {
    ListNode dump(0);
    ListNode* current = &dump;

    while (list1 != NULL && list2 != NULL) {
      if (list1->val < list2->val) {
        current->next = list1;
        list1 = list1->next;
      } else {
        current->next = list2;
        list2 = list2->next;
      }
      current = current->next;
    }

    if (list1 != NULL)
      current->next = list1;
    else
      current->next = list2;

    return dump.next;
  }
};