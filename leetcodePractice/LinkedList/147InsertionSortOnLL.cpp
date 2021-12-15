#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/insertion-sort-list/
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if(!head)
            return NULL;
        ListNode *tail = head, *cur, *iter;
        while(tail -> next){
            //checking if next one is already the next bigger
            if(tail -> val <= tail -> next -> val){
                    tail = tail -> next;
                    continue;
            }
            // taking a new role to parse, curr, out of the list
            cur = tail -> next;
            tail -> next = cur -> next;
            // checking if curr will become the next head
            if(cur -> val < head -> val){
                cur -> next = head;
                head = cur;
                continue;
            }
            // rest cases
            iter = head;
            while(iter != tail){
                //checking when we can splice cur between iter and the following  value
                if(cur -> val < iter -> next -> val){
                    cur -> next = iter -> next;
                    iter -> next = cur;
                    break;
                }
                // moving to next
                iter = iter -> next;
            }
        }
        return head;
    }
};

int main(){
    Solution ss;
    ListNode *head = new ListNode(1);
    head -> next = new ListNode(4);
    head -> next -> next = new ListNode(3);
    head -> next -> next -> next = new ListNode(2);
    head -> next -> next -> next -> next = new ListNode(5);
    head -> next -> next -> next -> next -> next = new ListNode(2);
    head -> next -> next -> next -> next -> next -> next = new ListNode(6);
    head -> next -> next -> next -> next -> next -> next -> next = new ListNode(1);
    head -> next -> next -> next -> next -> next -> next -> next -> next = new ListNode(0);
    cout<<ss.insertionSortList(head)->val<<endl;
    return 0;
}