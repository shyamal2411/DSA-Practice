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
        // exiting for empty lists
        if (!head) return;
        // finding the central node with the hare approach
        ListNode *tmp = head, *half = head, *prev = NULL;
        while (tmp->next && tmp->next->next) {
            tmp = tmp->next->next;
            half = half->next;
        }
        // adding one bit in case of lists with even length
        if (tmp->next) half = half->next;
        // reversing the second half
        while (half) {
            tmp = half->next;
            half->next = prev;
            prev = half;
            half = tmp;
        }
        half = prev;
        // merging the 2 lists
        while (head && half) {
            tmp = head->next;
            prev = half->next;
            head->next = half;
            half->next = tmp;
            head = tmp;
            half = prev;
        }
        // closing when we had even length arrays
        if (head && head->next) head->next->next = NULL;
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
