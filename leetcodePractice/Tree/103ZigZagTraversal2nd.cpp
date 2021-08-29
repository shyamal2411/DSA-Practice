
class Solution {
 public:
  vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    if (root == NULL)
      return ans;

    queue<TreeNode*> q;
    q.push(root);
    int k = 0;
    while (!q.empty()) {
      vector<int> vec;
      int n = q.size();
      for (int i = 0; i < n; i++) {
        TreeNode* temp = q.front();
        q.pop();
        vec.push_back(temp->val);

        if (temp->left)
          q.push(temp->left);
        if (temp->right)
          q.push(temp->right);
      }
      if (k & 1)  // this is bits form, means if(k%2==1)
        reverse(vec.begin(), vec.end());
      k++;
      ans.push_back(vec);
    }
    return ans;
  }
};