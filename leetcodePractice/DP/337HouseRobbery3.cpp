#include<bits/stdc++.h>
using namespace std;


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
    unordered_map<TreeNode*, int> mp;
    int rob(TreeNode* root) {

        if(!root)
        return 0;
        if(mp.count(root))
            return mp[root];
        int total=0;
       
        if(root->left)
            total+=rob(root->left->left)+rob(root->left->right);
        if(root->right)
            total+=rob(root->right->left)+rob(root->right->right);
        
        return mp[root]=max(root->val+total, rob(root->left)+rob(root->right));
    }
};
//notes

int main()
{
    Solution s;
    TreeNode* root=new TreeNode(3);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->right=new TreeNode(3);
    root->right->right=new TreeNode(1);
    cout<<s.rob(root);
    return 0;
}