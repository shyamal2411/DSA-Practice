
class Solution {
 public:
  void help(TreeNode* root, int& pre, int& ans) {
    if (root) {
      help(root->left, pre, ans);
      if (pre != -1)
        ans = min(ans, root->val - pre);

      pre = root->val;
      help(root->right, pre, ans);
    }
  }

  int getMinimumDifference(TreeNode* root) {
    int ans = INT_MAX, pre = -1;
    help(root, pre, ans);
    return ans;
  }
};