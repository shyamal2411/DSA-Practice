#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Recursive_Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return NULL;
        head -> next =removeElements(head->next, val);
        if(head->val==val){
            ListNode* ans = head -> next;
            delete head;
            return ans;
        }
        else{
            return head;
        }
    }
};

class Iterative_Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        //if no linkedlist, return head
        if(head==NULL)
            return head;
        
        //traverse till the node to be deleted.
        while(head!=NULL && head->val==val)
        {
            head=head->next;
        }
        
        ListNode* current=head;
        ListNode* prev=NULL;
        
        while(current != NULL)
        {
            if(current->val==val)
            {
                prev->next=current ->next; //current na next ne prev no next banavi do, so the current node gets unlisted.
                current =current->next; // now the past prev became present current.
                //deleting the node
            }
            else
            {
                prev=current;
                current=current->next;
            }
        }
         return head;
    }
};

int main(){
    Recursive_Solution ss;
    ListNode* head = new ListNode(1);
    head -> next = new ListNode(2);
    head -> next -> next = new ListNode(6);
    head -> next -> next -> next = new ListNode(3);
    head -> next -> next -> next -> next = new ListNode(4);
    head -> next -> next -> next -> next -> next = new ListNode(5);
    head -> next -> next -> next -> next -> next -> next = new ListNode(6);
    head -> next -> next -> next -> next -> next -> next -> next = new ListNode(6);
    cout<<ss.removeElements(head, 6)->val<<endl;
    return 0;
}