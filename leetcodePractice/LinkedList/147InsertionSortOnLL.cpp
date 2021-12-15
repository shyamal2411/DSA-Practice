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

/*
https://leetcode.com/problems/insertion-sort-list/discuss/920433/C%2B%2B-Pointer-based-Solution-Explained-100-Time-90-Space
Ah, gotta love starting the day with classic algorithms you otherwise would just see again on textbooks and manuals :)

In order to proceed with this one, we need to first of all check if we are dealing with an empty list: if so, we just return NULL.

Otherwise, we create 3 support variables, all ListNode pointers:

tail, initialised to be head will delimit up to where our sorted domain extends;
curr is the node we are currently considering and putting in sorted order;
iter, finally, it is a support variable for when we need to go and splice curr if it is not the newest minimum or the newest maximum; 
I know I might have not used it, just splicing curr so that it would bubble up to his position, 
but that seemed needlessly expensive and not worth saving the tiny amount of memory an extra pointer would cost us - so, 
unless your interviewer really wants you to consider other approaches (like dealing with devices of very little memory, but then not sure how they would handle linked lists), just discuss it quickly and make your own call of what is best.
Then we have our main loop and we will proceed until we have something else to parse, that is to say as long as tail->next. 
Notice we do not need to check if tail exist, since we initialised it to head and we checked before that head has to be non NULL.
Inside our loops we will:

check if curr is the newest maximum and thus replace tail with it;
get the next value after tail out and assign it to curr;
check if curr is the newest minimum and thus replace head with it;
check for all the other cases, assigning head to iter initially and gradually increasing it, checking if curr fits between iter and iter->next.
Once we are done parsing the whole list, we return head :)


*/