class Solution {
 public:
  bool hasPathSum(TreeNode* root, int targetSum) {
    if (!root)
      return false;
    targetSum -= root->val; /*go on decrementing the sum if it doesn't get 0,
                               then simply false.*/
    if (targetSum == 0 and !root->left and !root->right)
      return true;

    return hasPathSum(root->left, targetSum) ||
           hasPathSum(root->right, targetSum);
    // if either of the sides then true else false.
  }
};