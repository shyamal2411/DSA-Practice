#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
       //edge cases
        if(!head || !head->next || k==0)
            return head;
        
        //get length of the list
        ListNode* cur= head;
        int len=1; //we already check if LL is atleast having head i.e. head=1 node
        while(cur->next)
        {cur=cur->next; len++;}
        
        //go to that node
        cur->next=head;
        k=k%len;
        k=len-k;
        while(k--)
            cur=cur->next;
        
        //make the node head and break connection
        head=cur->next;
        cur->next=NULL;
        
        return head;
    }
};

int main()
{
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
    Solution obj;
    ListNode* ans=obj.rotateRight(head,2);
    while(ans)
    {
        cout<<ans->val<<" ";
        ans=ans->next;
    }
    return 0;
}