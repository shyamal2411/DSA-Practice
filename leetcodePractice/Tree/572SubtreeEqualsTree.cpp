#include<bits/stdc++.h>
using namespace std;


// https://leetcode.com/problems/subtree-of-another-tree/
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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return areequal(root, subRoot) || (root->left && isSubtree(root->left, subRoot))
                              || (root->right && isSubtree(root->right, subRoot)); 
    }

    bool areequal(TreeNode* s, TreeNode* t){
        if(s==NULL || t==NULL)
            return s==t;
        
        return s->val == t->val && areequal(s->left, t->left)
                                && areequal(s->right, t->right);
    }
    
};

int main(){
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    TreeNode* subRoot = new TreeNode(4);
    subRoot->left = new TreeNode(5);
    subRoot->right = new TreeNode(6);
    cout<<s.isSubtree(root, subRoot);
    return 0;
}