#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/
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
    int ans = 0;
    pair<int,int> solve(TreeNode* root){
        if(root==NULL) return {0,0};
        
        auto left = solve(root->left);
        int lsum = left.first; // sum of nodes present in left sub tree
        int lCount = left.second; // no. of nodes present in left sub tree
        
        auto right = solve(root->right);
        int rsum = right.first; // sum of nodes present in right sub tree
        int rCount = right.second; // no. of nodes present in left sub tree
        
        int sum = root->val + lsum + rsum;
        int cnt = lCount + rCount + 1;
        
        if(root->val == sum/cnt) ans++;
        return {sum,cnt};
    }
    int averageOfSubtree(TreeNode* root) {
        solve(root);
        return ans;
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
    Solution ss;
    cout<<ss.averageOfSubtree(root);
    return 0;
}