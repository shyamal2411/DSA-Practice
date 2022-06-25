#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;

struct ListNode {
int val;
ListNode *next;
ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        
        if(l1->val > l2->val)
            swap(l1, l2);
        ListNode* ans=l1;
        while(l1!=NULL && l2!=NULL){
            ListNode* temp=NULL;
            while(l1!=NULL && l1->val <= l2->val){
                temp=l1;
                l1=l1->next;
            }
            temp->next=l2;
            swap(l1, l2);
        }
        return ans;
    }
};
          
int main(){
Solution ss;
// vector<int> vec = {};
ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);

    // while(head!=NULL)
    // {
    //     cout<<head->val<<" ";
    //     head=head->next;
    // }
    cout<<endl<<endl;
    // ListNode* result=ss.middleofLL(head);
return 0;
}