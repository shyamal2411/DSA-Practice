/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int TreeDepth(TreeNode* root)
    {
        if(!root)
            return 0;
        
        int left=TreeDepth(root->left)+1;//explore leftside
        int right=TreeDepth(root->right)+1;//explore rightside
        
        if(abs(left-right)>1 || left<1 || right<1)
            return -1;  //conditions for balance
        
        return (max(left,right)); //return the max of two
    }
    
    bool isBalanced(TreeNode* root) {
        if(TreeDepth(root)<0) //if root is -ve, simply false
            return false;
        
        return true;
    }
};