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
    int count=0;
    
    void dfs(TreeNode* root, int val){
        if(!root) return;
        if(root->val>=val)
            count++;
        dfs(root->left, max(val, root->val));
        dfs(root->right, max(val, root->val));

    }
    
    int goodNodes(TreeNode* root) {
      dfs(root, INT_MIN);
        return count;
    }
};

int main() {
    TreeNode *root = new TreeNode(4);
    TreeNode *node1 = new TreeNode(1);
    TreeNode *node2 = new TreeNode(3);
    TreeNode *node3 = new TreeNode(5);
    root->left = node1;
    root->right = node2;
    node2->right = node3;
    Solution ss;
    cout<<ss.goodNodes(root)<<endl;
	return 0;
}