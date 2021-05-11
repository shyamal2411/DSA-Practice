class Solution {
 public:
  void preorder(TreeNode* root, vector<int>& tempNode) {
    if (!root) 
      return;
    
    tempNode.push_back(root->val);
    preorder(root->left, tempNode);
    preorder(root->right, tempNode);
  }
    vector<int> preorderTraversal(TreeNode * root) {
      vector<int> tempNode;
      preorder(root, tempNode);
    
      return tempNode;
    
  }
};