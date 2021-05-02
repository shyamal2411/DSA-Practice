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
  TreeNode* searchBST(TreeNode* root, int val) {
    if (root == NULL)
      return root;

    TreeNode* tempNode = new TreeNode();

    if (val < root->val)
      tempNode = searchBST(root->left, val);

    else if (val > root->val)
      tempNode = searchBST(root->right, val);

    else
      tempNode = root;

    return tempNode;
  }
};

//! ITERATIVE APPROACH

/*
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {

        //ITERATIVE APPROACH
         while (root != nullptr && root->val != val) {
      root = (root->val > val) ? root->left : root->right;
    }
    return root;
    }//with help of discuss solution
};
*/