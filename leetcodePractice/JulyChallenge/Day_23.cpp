
//cpp program to run the above 
#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        if(!root)
            return NULL;
        
        root->left=pruneTree(root->left);
        root->right=pruneTree(root->right);
        
        if(root->left == NULL && root->right==NULL && root->val==0)
            return NULL;
        
        return root;
    }
};

int main() {
   TreeNode* root = new TreeNode(1);
   root->left = new TreeNode(0);
   root->right = new TreeNode(1);
   root->left->left = new TreeNode(0);
   root->right->right = new TreeNode(1);
   Solution obj;
   TreeNode* newroot = obj.pruneTree(root);
   cout << newroot->val << endl;
   return 0;
}