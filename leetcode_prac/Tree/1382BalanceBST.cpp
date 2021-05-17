class Solution {
 public:

  vector<TreeNode*> sortedVec;
 
  TreeNode* balanceBST(TreeNode* root) {
    inorderTraverse(root);
    return sortedArrayToBST(0, sortedVec.size() - 1);
  }
  void inorderTraverse(TreeNode* root) {
    if (root == NULL)
      return;
    inorderTraverse(root->left);
    sortedVec.push_back(root);
    inorderTraverse(root->right);
  }
  TreeNode* sortedArrayToBST(int startpt, int endpt) {
    if (startpt > endpt)
      return NULL;
    int mid = (startpt + endpt) / 2;
    TreeNode* root = sortedVec[mid];
    root->left = sortedArrayToBST(startpt, mid - 1);
    root->right = sortedArrayToBST(mid + 1, endpt);
    return root;
  }
};