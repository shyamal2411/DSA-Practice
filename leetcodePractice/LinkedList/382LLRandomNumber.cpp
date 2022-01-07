#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/linked-list-random-node/
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* head = NULL;
    Solution(ListNode* head) {
        this -> head = head;
    }
    
    int getRandom() {
        int ans = 0, i = 1;
        ListNode* p = this -> head;
        while(p){
            if(rand() % i == 0)
                ans = p -> val;
                i++;
            p = p -> next;
        }
        return ans;
    }
};

int main(){
    srand(time(NULL));
    ListNode* head = new ListNode(1);
    head -> next = new ListNode(2);
    head -> next -> next = new ListNode(3);
    head -> next -> next -> next = new ListNode(4);
    Solution* obj = new Solution(head);
    cout<<obj -> getRandom()<<endl;
    return 0;
}