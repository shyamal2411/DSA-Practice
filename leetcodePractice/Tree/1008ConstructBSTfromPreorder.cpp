/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
 public:
  TreeNode* bstFromPreorder(vector<int>& preorder) {
    TreeNode* root = new TreeNode();  // we've to create a root because we're
                                      // only given the order
    root = NULL;

    for (auto i = preorder.begin(); i != preorder.end();
         i++)  // int doesn't work here, use only auto
      root = insertbst(root, *i);

    return root;
  }

  TreeNode* insertbst(TreeNode* root, int key) {
    if (!root)
      return new TreeNode(key);  // return that value

    if (key > root->val)
      root->right = insertbst(
          root->right, key);  // if key to be inserted from the order is greater
                              // insert on right side as we do in insert program

    if (key < root->val)
      root->left = insertbst(root->left, key);  // else insert on the left side

    return root;
  }
};