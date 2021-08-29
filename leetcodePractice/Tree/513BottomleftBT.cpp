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
  void findval(TreeNode* root, int& maxd, int& leftval, int depth) {
    if (!root)
      return;

    findval(root->left, maxd, leftval, depth + 1);   // for left
    findval(root->right, maxd, leftval, depth + 1);  // for right

    if (depth > maxd) {
      maxd = depth;  // maintain a max possible value, compare it everytime, if
                     // it is not
      leftval = root->val;  // then got on left of the parent node
    }
  }

  int findBottomLeftValue(TreeNode* root) {
    int maxd = 0;

    int leftval = root->val;  // initialize it with root itself
    findval(root, maxd, leftval, 0);
    return leftval;
  }
};