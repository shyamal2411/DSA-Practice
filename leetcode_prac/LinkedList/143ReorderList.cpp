//cpp program to run the below code
#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    void reorderList(ListNode* head) {
    if(head==NULL || head->next==NULL)
        return;
        
        //head of first half;
        ListNode* l1=head;
        //head of second half
        ListNode* slow=head;
        
        //tail of second half
        ListNode* fast=head;
        //tail of  first half
        ListNode* prev=NULL;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=NULL;
        ListNode* l2=reverse(slow);
        merge(l1,l2);
    }
    
public:
    // ListNode* reverse(ListNode* head){
    //     ListNode* prev=NULL;
    //     ListNode* current=head;
        
    //     while(current!=NULL)
    //     {
    //         ListNode* nextNode=current->next;
    //         current->next=prev;
    //         prev=current;
    //         current=nextNode;
    //     }
    //     return prev;
    // }
    ListNode* reverse(ListNode* head) {
    ListNode *prev = NULL, *current = NULL;
    while (head) {
      current = head -> next;
      head -> next = prev;
      prev = head;
      head = current;
    }
    return prev;
  }
public:
    void merge(ListNode* l1, ListNode* l2){
        while(l1!=NULL){
            ListNode* l1_next=l1->next;
            ListNode* l2_next=l2->next;
            
            l1->next=l2;
            if(l1_next==NULL)
            {break;}
            
            l2->next ==l1_next;
            l1=l1_next;
            l2=l2_next;
        }
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
    obj.reorderList(l1);
    cout<<"List after reordering"<<endl;
    while(l1!=NULL){
        cout<<l1->val<<"->";
        l1=l1->next;
    }
    cout<<"null"<<endl;
    return 0;
}
