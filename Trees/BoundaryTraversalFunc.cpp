class Solution {
 public:
  void printleaf(TreeNode* root, vector<int>& ans) {
    if (!root)
      return;
    if (!root->left && !root->right)
      ans.push_back(root->val);
    printleaf(root->left, ans);
    printleaf(root->right, ans);
  }

  void printleft(TreeNode* root, std::vector<int>& ans) {
    if (!root)
      return;
    ans.push_back(root->val);
    if (!root->left) {
      printleft(root->right, ans);
    } else {
      printleft(root->left, ans);
      printleaf(root->right, ans);
    }
  }

  void printright(TreeNode* root, std::vector<int>& ans) {
    if (!root)
      return;
    if (!root->right) {
      printright(root->left, ans);
    } else {
      printleaf(root->left, ans);
      printright(root->right, ans);
    }

    ans.push_back(root->val);
  }

  vector<int> boundaryOfBinaryTree(TreeNode* root) {
    std::vector<int> ans;
    if (!root)
      return ans;
    ans.push_back(root->val);
    printleft(root->left, ans);
    printright(root->right, ans);
    return ans;
  }
};