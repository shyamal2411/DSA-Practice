/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
 public:
  int widthOfBinaryTree(TreeNode* root) {
    if (root == NULL)
      return 0;

    int ans = 0;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        
      int count = q.size();
      ans = max(count, ans);
      while (count--) {
      
        TreeNode* temp = q.front();
        q.pop();

        if (temp->left != NULL)
          q.push(temp->left);
        if (temp->right != NULL)
          q.push(temp->right);
      }
    }

    return ans;
  }
};

/*perform level order traversal, maintain 2 variables, here count is for
max count of nodes at a particular level, while ans is the max count of nodes a
tree can have, so at each level we take max of nodes at that level and whole
tree*/