#include<bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
   int val;
   TreeNode* left;
   TreeNode* right;
   TreeNode(int x)
   {
       val = x;
       left = NULL;
       right = NULL;
   }
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (!root)
      return NULL;
    
    if (root->val == p->val || root->val == q->val)
      return root;

    TreeNode* left = lowestCommonAncestor(root->left, p, q);
    TreeNode* right = lowestCommonAncestor(root->right, p, q);

    if (left && right)
      return root;

    return left != NULL ? left : right;
    }
};

int main()
{
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    root->left->left->left = new TreeNode(7);
    Solution obj;
    TreeNode* result = obj.lowestCommonAncestor(root, root->left, root->right->left);
    cout<<"The Lowest Common Ancestor of the nodes "<<root->left->val<<" and "<<root->right->left->val<<" is "<<result->val<<endl;
    return 0;
}
