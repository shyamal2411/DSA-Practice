/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  ListNode* reverseList(ListNode* head) {
    ListNode *temp = NULL, *nextnode = NULL;
    while (head) {
      nextnode = head->next;
      head->next = temp;
      temp = head;
      head = nextnode;
    }
    return temp;
  }
};