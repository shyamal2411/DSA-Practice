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
  vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    if (root == NULL)
      return ans;

    //same as level order
    queue<TreeNode*> q;
    q.push(root);
    bool lefttoright = true;

    while (!q.empty()) {
      int size = q.size();
      vector<int> rowwise(size); //create vector and add the elements rowwise
      for (int i = 0; i < size; i++) {
        TreeNode* node = q.front();
        q.pop();

        int index = (lefttoright) ? i : (size - 1 - i);

        rowwise[index] = node->val;

        if (node->left)
          q.push(node->left);
        if (node->right)
          q.push(node->right);
      }
      lefttoright = !lefttoright;
      ans.push_back(rowwise);
    }
    return ans;
  }
};