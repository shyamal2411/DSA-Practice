#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/copy-list-with-random-pointer/
// For intuition, strivers vide - 1st brute force approach.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, Node*> mp;
        Node* ptr = head;
            while(ptr){
                mp[ptr] = new Node(ptr->val);
                ptr = ptr -> next;
            }
        ptr = head;
        while(ptr){
            mp[ptr] -> next = mp[ptr -> next];
            mp[ptr] -> random = mp[ptr -> random];
            ptr = ptr-> next;
        }
        return mp[head];
    }
};

int main(){
    Solution ss;
    Node* head = new Node(1);
    head -> next = new Node(2);
    head -> next -> next = new Node(3);
    head -> next -> next -> next = new Node(4);
    head -> next -> next -> next -> next = new Node(5);
    head -> next -> next -> next -> next -> next = new Node(6);
    head -> next -> next -> next -> next -> next -> next = new Node(7);
    cout<<ss.copyRandomList(head)<<endl;
    return 0;
}