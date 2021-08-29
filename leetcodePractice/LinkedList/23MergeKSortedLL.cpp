
class Solution {
 public:
  ListNode* mergeKLists(vector<ListNode*>& lists) {
    return parts(lists, 0, lists.size() - 1);
  }

  ListNode* parts(vector<ListNode*> lists, int start, int end) {
    if (start == end) {
      return lists[start];
    }  // if no node, return start

    if (start < end)  // if there's a list, then do the following process
    {
      int mid =
          (start + end) / 2;  // split in 2 parts, as we did in merging 2 lists

      ListNode* ll1 = parts(lists, start, mid);  // split in 2 halves w.r.t. mid
      ListNode* ll2 = parts(lists, mid + 1, end);
      return merge(ll1, ll2);
    }
    return NULL;
  }
  ListNode* merge(ListNode* ll1, ListNode* ll2) {
    if (!ll1)  // if no linkedlist 1, then return 2, vice versa
      return ll2;
    if (!ll2)
      return ll1;

    if (ll1->val < ll2->val)  // ek ni value ochi hoy to bija ne merge karo,
                              // bija ni ochi hoy to pella ne
    {
      ll1->next = merge(ll1->next, ll2);
      return ll1;
    } else {
      ll2->next = merge(ll1, ll2->next);
      return ll2;
    }
  }
};  // notes
