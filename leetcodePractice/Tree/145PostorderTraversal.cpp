class Solution {
 public:
  void postorder(TreeNode* root, vector<int>& tempNode) {
    if (!root) 
      return;
    
    postorder(root->left, tempNode);
    postorder(root->right, tempNode);
    tempNode.push_back(root->val);
  }
  vector<int> postorderTraversal(TreeNode* root) {
    vector<int> tempNode;
    postorder(root, tempNode);

    return tempNode;
  }
};