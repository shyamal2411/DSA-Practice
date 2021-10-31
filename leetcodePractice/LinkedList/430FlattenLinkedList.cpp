#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

class Solution {
public:
    
    void flattenHelper(Node *head, vector <int> &arr)
    {
        if(head == NULL)
            return ;
        // push to array
        arr.push_back(head->val);
		// go for child of each node
        flattenHelper(head->child, arr);
		// then traverse along the list
        flattenHelper(head->next, arr);
       
    }
    Node* flatten(Node* head) {
        vector <int> arr;
        
        flattenHelper(head, arr);
        Node *newHead = NULL;
        Node *ans;
		// traverse the array
        for(auto x: arr)
        {
            if(newHead == NULL)
            {
                newHead = new Node(x);
                ans = newHead;
            }
            else 
            {
                Node *newNode = new Node(x);
                newNode->prev = newHead;
                newHead->next = newNode;
                newHead = newHead->next;
            }
        }

        return ans;
    }
}; 

int main(){
    Solution s;
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);
    head->next->next->next->next->next->next->next = new Node(8);
    head->next->next->next->next->next->next->next->next = new Node(9);
    head->next->next->next->next->next->next->next->next->next = new Node(10);
    head->next->next->next->next->next->next->next->next->next->next = new Node(11);
    head->next->next->next->next->next->next->next->next->next->next->next = new Node(12);
    head->next->next->next->next->next->next->next->next->next->next->next->next = new Node(13);
    cout<<s.flatten(head)->val<<endl;
    return 0;

}