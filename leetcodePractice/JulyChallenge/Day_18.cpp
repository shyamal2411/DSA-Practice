//NOTE: WHOLE CODE IS WRITTEN IN LINKEDLIST FOLDER


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