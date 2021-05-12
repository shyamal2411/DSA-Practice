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
  TreeNode* deleteNode(TreeNode* root, int key) {
    if (!root)
      return root;

    if (key < root->val)  // if value is less, traverse left side
      root->left = deleteNode(root->left, key);

    else if (key > root->val)  // else traverse right side
      root->right = deleteNode(root->right, key);
    else {
      if (!root->left && !root->right)  // IF THERE'S NO CHILD
      {
        delete (root);
        return NULL;
      }

      if (!root->left || !root->right)  // IF THERE'S 1 CHILD
      {
        TreeNode* onechild = root->left ? root->left : root->right;
        delete (root);
        return onechild;
      }
      if (root->left && root->right)  // IF BOTH CHILD NODES ARE PRESENT
      {
        TreeNode* twochild = root->right;

        while (twochild->left) {
          twochild = twochild->left;
        }

        root->val = twochild->val;
        root->right = deleteNode(root->right, root->val);
      }
    }
    return root;
  }
};