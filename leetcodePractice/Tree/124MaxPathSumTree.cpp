class Solution {
  int check(TreeNode* root, int& maxVal) {
    if (!root)
      return 0;

    int rightnode = max(0, check(root->right, maxVal));
    int leftnode = max(0, check(root->left, maxVal));
    maxVal = max(leftnode + rightnode + root->val, maxVal);

    return root->val + max(leftnode, rightnode);
  }

 public:
  int maxPathSum(TreeNode* root) {
    int maxVal = INT_MIN;
    check(root, maxVal);
    return maxVal;
  }
};  // todo again