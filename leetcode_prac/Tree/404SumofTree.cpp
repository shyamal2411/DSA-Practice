class Solution {
 public:
  void sumFunc(TreeNode* root, int& sum, bool flag) {
    if (!root)
      return;

    if (flag && root && !root->left && !root->right) {
      sum += root->val;
      return;
    }

    sumFunc(root->left, sum, true);
    sumFunc(root->right, sum, false);

    return;
  }

  int sumOfLeftLeaves(TreeNode* root) {
    int sum = 0;
    sumFunc(root, sum, false);
    return sum;
  }
};