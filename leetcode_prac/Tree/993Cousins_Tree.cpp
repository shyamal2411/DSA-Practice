
class Solution {
 public:
  TreeNode* help(TreeNode* root, int val, int depth, int& level) {
    if (!root)
      return NULL;

    if ((root->left && root->left->val == val) ||
        (root->right && root->right->val == val)) {
      level = depth;
      return root;
    }
    TreeNode* left = help(root->left, val, depth + 1, level);
    if (left)
      return left;

    TreeNode* right = help(root->right, val, depth + 1, level);
    if (right)
      return right;

    return NULL;
  }

  bool isCousins(TreeNode* root, int x, int y) {
    int xdepth = -1, ydepth = -1;
    TreeNode* xparent = help(root, x, 0, xdepth);
    TreeNode* yparent = help(root, y, 0, ydepth);

    if (xdepth != ydepth || xparent == yparent)
      return false;
    else
      return true;
  }
};