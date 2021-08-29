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
// class Solution {
// public:
//     bool isValidBST(TreeNode* root) {
//         return isbsvalid(root, INT_MIN, INT_MAX);
//     }

//     bool isbsvalid(TreeNode* root, int minval, int maxval)
//     {
//           if(!root)
//             return true;

//         if(root->val <= minval || root->val >= maxval
//           &&  isbsvalid(root->left, minval, root->val)
//           &&  isbsvalid(root->right, root->val, maxval))
//             return true;

//         else
//             return false;
//     }
// };

class Solution {
 public:
  bool isValidBST(TreeNode* root) { return valid(root, LONG_MIN, LONG_MAX); }

 private:
  bool valid(TreeNode* root, long min, long max) {
    if (!root) {
      return true;
    }
    if (root->val <= min || root->val >= max) {
      return false;
    }
    return valid(root->left, min, root->val) &&
           valid(root->right, root->val, max);
  }
};

// REFER https://www.youtube.com/watch?v=yEwSGhSsT0U for explanation