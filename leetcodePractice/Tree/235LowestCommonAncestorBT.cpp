
class Solution {
 public:
  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    // check for left side
    if ((root->val > p->val) && (root->val > q->val)) {
      return lowestCommonAncestor(root->left, p, q);
    }
    // check for right
    if ((root->val < p->val) && (root->val < q->val)) {
      return lowestCommonAncestor(root->right, p, q);
    }
    return root;
  }
};