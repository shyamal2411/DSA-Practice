/**
 * Definition for a binary tree nodes.
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
  vector<vector<int>> levelOrderBottom(TreeNode* root) {
    vector<vector<int>> ans;  // data type should be same as function else
                              // answer will not be accepted
    if (!root)
      return ans;
    queue<TreeNode*> q;  // to keep track of elements
    q.push(root);        // start inserting from root in queue

    while (!q.empty()) {
      int n = q.size();
      vector<int> nodes(n);  // to store the values and later push them in
                             // queue.
      for (int i = 0; i < n; ++i) {
        TreeNode* qnode = q.front();
        nodes[i] = qnode->val;  // add the value in vector
        q.pop();                // clear the node's record from queue
        if (qnode->left)        // if left child exists push it into the queue
          q.push(qnode->left);
        if (qnode->right)
          q.push(qnode->right);
      }
      ans.push_back(nodes);  // insert all the values in the vector
    }
    reverse(ans.begin(),
            ans.end());  // reverse the vector as required in the question
    return ans;
  }
};