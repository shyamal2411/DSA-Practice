#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
private:
    TreeNode* sortedList(ListNode* head, ListNode* tail){
       
         if(head==tail)
            return NULL;
      ListNode* fast=head, *slow=head;
        while(fast!=tail && fast->next!=tail){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        TreeNode* root= new TreeNode(slow->val);
        root->left=sortedList(head, slow);
        root->right=sortedList(slow->next, tail);
        
        return root;
    }
    
public:
    TreeNode* sortedListToBST(ListNode* head) {
     //TODO: ADD ALL ELEMENTS OF LINKEDLIST IN A VECTOR, THESE ELEMENTS       
    //WILL BE OF INORDER TRAVERSAL, THEN CREATE TREE FROM THAT VECTOR
        return sortedList(head, NULL);
    }
    
};

void printTree(TreeNode* root){
    if(root==NULL)
        return;
    printTree(root->left);
    cout<<root->val<<" ";
    printTree(root->right);
}

int main(){
    Solution ss;
    ListNode* root=new ListNode(-10);
    root->next=new ListNode(-3);
    root->next->next=new ListNode(0);
    root->next->next->next=new ListNode(5);
    root->next->next->next->next=new ListNode(9);
    TreeNode* tree=ss.sortedListToBST(root);
    cout<<"Tree:";
    printTree(tree);
    return 0;
}