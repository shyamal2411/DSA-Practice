
class Solution {
 public:
  TreeNode* solve(vector<int>& preorder,
                  vector<int>& inorder,
                  int& rootIndex,
                  int left,
                  int right) {
    if (left > right)
      return NULL;

    int p = left;
    while (inorder[p] != preorder[rootIndex]) {
      p++;
    }

    rootIndex++;
    TreeNode* newNode = new TreeNode(inorder[p]);
    newNode->left = solve(preorder, inorder, rootIndex, left, p - 1);
    newNode->right = solve(preorder, inorder, rootIndex, p + 1, right);

    return newNode;
  }

  TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    int rootIndex = 0;
    return solve(preorder, inorder, rootIndex, 0, inorder.size() - 1);
  }
};  // learnt from discuss