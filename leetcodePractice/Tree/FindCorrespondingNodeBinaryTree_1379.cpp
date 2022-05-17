#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/
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
    
   TreeNode* ans;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) 
    {
        if (cloned == NULL)
            return cloned;
        if (cloned->val == target->val) // If target node found in cloned tree save it into a variable.
            ans = cloned;
        getTargetCopy(original, cloned->left, target);
        getTargetCopy(original, cloned->right, target);
        return ans;
    }
};

//main function
int32_t main(){
    int n; cin>>n;
    unordered_map<int, int> mp;
    TreeNode *root=new TreeNode(1);
    TreeNode *root1=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);
    root->right->left=new TreeNode(6);
    root->right->right=new TreeNode(7);
    root1->left=new TreeNode(2);
    root1->right=new TreeNode(3);
    root1->left->left=new TreeNode(4);
    root1->left->right=new TreeNode(5);
    root1->right->left=new TreeNode(6);
    root1->right->right=new TreeNode(7);
    Solution s;
    s.getTargetCopy(root, root1, root->left);
    cout<<s.ans->val;
    return 0;
}