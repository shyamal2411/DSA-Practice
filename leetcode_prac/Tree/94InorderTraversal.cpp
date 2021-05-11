class Solution {
 public:
  void inorder(TreeNode* root, vector<int>& tempNode) {
    if (!root) 
      return;
    
    inorder(root->left, tempNode);
    tempNode.push_back(root->val);
    inorder(root->right, tempNode);
  }
  vector<int> inorderTraversal(TreeNode* root) {
    vector<int> tempNode;
    inorder(root, tempNode);

    return tempNode;
  }
};