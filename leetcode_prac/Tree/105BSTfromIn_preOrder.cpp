class Solution {
 public:
  TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    int rootIndex = 0;
    return build(preorder, inorder, rootIndex, 0, inorder.size() - 1);
  }

  TreeNode* build(vector<int>& preorder, vector<int>& inorder,int& rootIndex, int left, int right) {
       if (left > right)
       return NULL;
    
    int t = left;  // find the root from inorder
    while (inorder[t] != preorder[rootIndex])
      t++;

    rootIndex++;
    TreeNode* newNode = new TreeNode(inorder[t]);
    newNode->left = build(preorder, inorder, rootIndex, left, t - 1);
    newNode->right = build(preorder, inorder, rootIndex, t + 1, right);
    return newNode;
  }
};