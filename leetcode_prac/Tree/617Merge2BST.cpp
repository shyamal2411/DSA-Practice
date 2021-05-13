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
//! failed approach due to compilation error
// class Solution {
//  public:
//   TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
//     return mergeboth(root1, root2);
//   }

//  public:
//   TreeNode* mergeboth(TreeNode* root1, TreeNode* root2) {
//     if (root1 == NULL && root2 == NULL)
//       return NULL;
//     if (root1 == NULL && root2 ! == NULL)
//       return root2;
//     if (root1 ! == NULL && root2 == NULL)
//       return root1;

//     TreeNode sum = new TreeNode(root1->val + root2->val);

//     sum->left = mergeboth(root1->left, root2->left);
//     sum->right = mergeboth(root1->right, root2->right);

//     return sum;
//   }
// };

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
  TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
    if (root1 != NULL && root2 != NULL) {
      root1->val += root2->val;  // add both's values into one
      root1->left = mergeTrees(
          root1->left, root2->left);  // recursively call the left part and go
                                      // on adding them to the left
      root1->right =
          mergeTrees(root1->right, root2->right);  // same for the right side

      return root1;  // return primary root
    }
    if (root1 != NULL) /* if (root1 == NULL && root2 ! == NULL) means if there's
                          no node in 2nd tree*/
      return root1;    // then simply add root1's node in resultant tree

    if (root2 != NULL)  // same for root1 node
      return root2;

    return root1;  // return the primary tree
  }
};