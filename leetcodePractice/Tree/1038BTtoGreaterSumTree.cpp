#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/
class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    int sum = 0;
    TreeNode* bstToGst(TreeNode* root) {
        dfs(root);
        return root;
    }
    void dfs(TreeNode* root){
        if(!root)
            return;
        dfs(root -> right);
        root -> val +=sum;
        sum = root -> val;
        dfs(root -> left);
        return;
    }
};
// https://youtu.be/55aDH-wLstU

int main(){
    Solution s;
    TreeNode* root = new TreeNode(4);
    root -> left = new TreeNode(1);
    root -> right = new TreeNode(6);
    root -> left -> left = new TreeNode(0);
    root -> left -> right = new TreeNode(2);
    root -> right -> left = new TreeNode(5);
    root -> right -> right = new TreeNode(7);
    TreeNode* res = s.bstToGst(root);
    return 0;
}