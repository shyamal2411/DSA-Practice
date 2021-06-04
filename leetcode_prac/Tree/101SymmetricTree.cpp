
class Solution {
 public:
  bool check(TreeNode* leftnode, TreeNode* rightnode) {
    if (leftnode == NULL && rightnode == NULL)
      return true;
    if (leftnode == NULL || rightnode == NULL)
      return false;

    if (leftnode->val == rightnode->val)
      return check(leftnode->left, rightnode->right) &&
             check(leftnode->right, rightnode->left);
    return false;
  }

  bool isSymmetric(TreeNode* root) {
    if (!root)
      return true;

    return check(root->left, root->right);
  }
};