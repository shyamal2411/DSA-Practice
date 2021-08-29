
class Solution {
 public:
  TreeNode* invertTree(TreeNode* root) {
    if (!root)
      return NULL;
    TreeNode* node = root->right;
    root->right = invertTree(root->left);
    root->left = invertTree(node);

    return root;
  }
};
// BOTH WAY WORKS - EITHER TAKE NODE AS LEFT OR RIGHT
/*
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return NULL;
        TreeNode* node=root->left;
        root->left=invertTree(root->right);
        root->right=invertTree(node);

        return root;
    }
};*/