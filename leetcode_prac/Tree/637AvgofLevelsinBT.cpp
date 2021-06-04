class Solution {
 public:
  vector<double> averageOfLevels(TreeNode* root) {
    vector<double> temp;
    if (root == NULL)
      return temp;
    vector<vector<int>> ans;
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
      vector<int> v;
      int size = q.size();
      for (int i = 0; i < size; i++) {
        TreeNode* t = q.front();
        q.pop();
        v.push_back(t->val);
        if (t->left)
          q.push(t->left);
        if (t->right)
          q.push(t->right);
      }
      ans.push_back(v);
      // EVERYTHING IS SAME UPTO HERE.
      double total = 0;
      for (int i = 0; i < v.size(); i++) {
        total += v[i];
      }  // add all queue elements
      double r = total / v.size();
      temp.push_back(r);
    }
    return temp;
  }
};