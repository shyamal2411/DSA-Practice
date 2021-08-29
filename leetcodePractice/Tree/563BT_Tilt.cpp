
class Solution {
 public:
  int findTilt(TreeNode* root) {
    if (!root)
      return 0;

    int ans = 0;
    postorder(root, ans);
    return ans;
  }

 private:
  int postorder(TreeNode* root, int& ans) {
    if (!root)
      return 0;

    int leftsum = postorder(root->left, ans);
    int rightsum = postorder(root->right, ans);

    ans += abs(leftsum - rightsum);

    return leftsum + rightsum + root->val;
  }
};