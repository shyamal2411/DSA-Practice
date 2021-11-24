#include<bits/stdc++.h> 
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
 void reorderList_Iterative(ListNode* head) {
       // we need to find the penultimate node in order to proceed
        ListNode* penultimate;
        while (head && head->next && head->next->next) {
            penultimate = head;
            while (penultimate->next->next) penultimate = penultimate->next;
            // then we move it in the second spot
            penultimate->next->next = head->next;
            head->next = penultimate->next;
            // and set penultimate to be the last
            penultimate->next = NULL;
            head = head->next->next;
        }
    }

    void reorderList_Recursive(ListNode* head) {
        // base case handled here
        if (!head || !head->next || !head->next->next) return;
        // we need to find the penultimate node in order to proceed
        ListNode* penultimate = head;
        while (penultimate->next->next) penultimate = penultimate->next;
        // then we move it in the second spot
        penultimate->next->next = head->next;
        head->next = penultimate->next;
        // and set penultimate to be the last
        penultimate->next = NULL;
        // and then we proceed with the rest, same way
        reorderList_Recursive(head->next->next);
    }
};

int main(){
    ListNode *l1=new ListNode(1);
    ListNode *l2=new ListNode(2);
    ListNode *l3=new ListNode(3);
    ListNode *l4=new ListNode(4);
    ListNode *l5=new ListNode(5);
    ListNode *l6=new ListNode(6);
    ListNode *l7=new ListNode(7);
    l1->next=l2;
    l2->next=l3;
    l3->next=l4;
    l4->next=l5;
    l5->next=l6;
    l6->next=l7;
    // cout<<"List before reordering"<<endl;
    // while(l1!=NULL){
    //     cout<<l1->val<<"->";
    //     l1=l1->next;
    // }
    cout<<endl;
    Solution obj;
    obj.reorderList_Recursive(l1);
    cout<<"List after reordering"<<endl;
    while(l1!=NULL){
        cout<<l1->val<<"->";
        l1=l1->next;
    }
    cout<<"null"<<endl;
    return 0;
}