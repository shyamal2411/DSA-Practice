#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/
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
    int maxAncestorDiff(TreeNode* root) {
        if(!root)
            return 0;
        ans = 0;
        help(root, root->val, root->val);
        return ans;
    }
    void help(TreeNode* node, int curMax, int curMin){
        if(!node)
            return;
        
        int possibleRes = max(abs(curMax - node->val), abs(curMin - node -> val));
        ans = max(ans, possibleRes);
        
        curMax = max(curMax, node -> val);
        curMin = min(curMin, node -> val);
        help(node -> left, curMax, curMin);
        help(node -> right, curMax, curMin);
        return;
    }
};
//O(n)
int main(){
    Solution ss;
    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);
    root -> right -> left = new TreeNode(6);
    root -> right -> right = new TreeNode(7);
    cout<<ss.maxAncestorDiff(root)<<endl;
    return 0;
}