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
  int maxd = 0;

  int height(TreeNode* root) {
    if (root == NULL)
      return 0;

    int leftd = height(root->left);  // consider all the heights
    int rightd = height(root->right);

    if (leftd + rightd > maxd)  // check which height is max
      maxd = leftd + rightd;

    return 1 + max(leftd, rightd);  // return the max possible number
  }

  int diameterOfBinaryTree(TreeNode* root) {
    height(root);

    return maxd;
  }
};