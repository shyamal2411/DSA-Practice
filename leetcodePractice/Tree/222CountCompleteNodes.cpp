#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/count-complete-tree-nodes/
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    
    int countNodes(TreeNode* root) {
         vector<int> treenode;
        inorder(root, treenode);
        
        return treenode.size();
        
    }
 void inorder(TreeNode* root, vector<int>& treenode){
        if(!root)
            return;
       
            inorder(root->left, treenode);
            treenode.push_back(root->val);
            inorder(root->right, treenode);
    }
};

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    Solution s;
    cout<<s.countNodes(root);
    return 0;
}