
class Solution {
 public:
  vector<int> rightSideView(TreeNode* root) {
    queue<TreeNode*> q;
    vector<int> vec;  // create vector for storing values of nodes

    if (!root)
      return vec;

    q.push(root);  // first push root into the queue.
    while (!q.empty()) {
      vec.push_back(q.back()->val);  // start pushing values from queue to vec
      for (int i = q.size(); i > 0; i--) {
        TreeNode* temp = q.front();
        q.pop();
        if (temp->left)
          q.push(temp->left);
        if (temp->right)
          q.push(temp->right);
      }
    }
    return vec;
  }
};