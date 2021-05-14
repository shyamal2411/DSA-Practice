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
  void inorder(TreeNode* root, vector<int>& vec) {
    if (!root)
      return;
    inorder(root->left, vec);
    vec.push_back(root->val);
    inorder(root->right, vec);
  }

  int kthSmallest(TreeNode* root, int k) {
    if (!root)
      return -1;
    vector<int> vec;
    inorder(root, vec);
    return vec[k - 1];
  }
};

/*  SELF EXPLANATION:
perform inorder and store the elements in a vector
By performing inorder elements from left will be gettting stored in the vector,
which obviously will be smallest, as small elements will be on the left, so
we'll then return the k-1th index of that vector, which will be the answer as
asked. */