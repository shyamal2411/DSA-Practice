#include<bits/stdc++.h>
using namespace std;

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
    
    vector<int> ans;
    void dfs(TreeNode* root){
        if(!root) return;
        //dfs-inorder
        ans.push_back(root->val);
        dfs(root->left);
        dfs(root->right);
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        dfs(root1);
        dfs(root2);
        sort(begin(ans),end(ans));
        return ans;
    }
};

int main()
{
    TreeNode* root1 = new TreeNode(1);
    TreeNode* root2 = new TreeNode(2);
    TreeNode* root3 = new TreeNode(3);
    TreeNode* root4 = new TreeNode(4);
    TreeNode* root5 = new TreeNode(5);
    TreeNode* root6 = new TreeNode(6);
    root1->left = root2;
    root1->right = root3;
    root2->left = root4;
    root2->right = root5;
    root3->right = root6;
    Solution obj;
    vector<int> ans = obj.getAllElements(root1,root6);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}