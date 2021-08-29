#include<bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:

    //to find length of linkedlist
    int LLlength(ListNode* head){
        int length=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            length++;
        }
        return length;
    }
    
    ListNode* helpreverse(ListNode* head, int k, int length){
        if(length< k)
            return head;
        
        int count =0;
        ListNode* prev=NULL, *next=NULL, *current=head;
        
        while(count<k && current!=NULL)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
            count++;
        }
        
        if(next!=NULL)
            head->next=helpreverse(next, k, length-k);
        
        return prev;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        int length=LLlength(head); //getting length
        return helpreverse(head, k, length);
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
    ListNode* result=obj.reverseKGroup(head, 2);
    while(result!=NULL)
    {
        cout<<result->val<<" ";
        result=result->next;
    }
    return 0;
}
//cpp code to run the above program

