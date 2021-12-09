#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/contest/weekly-contest-270/problems/delete-the-middle-node-of-a-linked-list/   
// 2095. Delete the Middle Node of a Linked List
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* prev = head;
        ListNode* dummy = head;
        ListNode* slow = head;
        ListNode* fast = head;
        
        if(!head)
            return NULL;
        
        if(!head->next){
            delete head;
            return NULL;
        }
        
        while(fast != NULL && fast -> next != NULL)
        {
            if(slow!=head)
                prev = prev -> next;
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        prev -> next = slow -> next;
        delete slow;
        return head;
    }
    
};

int main()
{
    ListNode* head = new ListNode(1);
    head -> next = new ListNode(2);
    head -> next -> next = new ListNode(3);
    head -> next -> next -> next = new ListNode(4);
    head -> next -> next -> next -> next = new ListNode(5);
    head -> next -> next -> next -> next -> next = new ListNode(6);
    head -> next -> next -> next -> next -> next -> next = new ListNode(7);
    head -> next -> next -> next -> next -> next -> next -> next = new ListNode(8);
    head -> next -> next -> next -> next -> next -> next -> next -> next = new ListNode(9);
    
    Solution s;
    ListNode* head1 = s.deleteMiddle(head);
    
    while(head1 != NULL){
        cout<<head1 -> val<<" ";
        head1 = head1 -> next;
    }
    return 0;
}