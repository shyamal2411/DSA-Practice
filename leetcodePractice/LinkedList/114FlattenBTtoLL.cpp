#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/flatten-binary-tree-to-linked-list/

// Basic intuition is to do preorder traversal and keep making LL nodes. But it doesn't
// work because we cannot make new LL list, so we have to modify the original tree. 
typedef vector<int> vi;
typedef vector<string> vst;

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
    void flatten(TreeNode* root) {
        if (!root)
            return;
        
        flatten(root->left);
        flatten(root->right);
        
        if (root->left) {
            TreeNode* right = root->right;
            root->right = root->left;
            root->left = NULL;
            while (root->right) root = root->right;
            root->right = right;
        }
    }
};

int main(){
Solution ss;
TreeNode* root = new TreeNode(1);
root->left = new TreeNode(2);
root->right = new TreeNode(3);
root->left->left = new TreeNode(4);
root->left->right = new TreeNode(5);
root->right->left = new TreeNode(6);
root->right->right = new TreeNode(7);
ss.flatten(root);
return 0;
}