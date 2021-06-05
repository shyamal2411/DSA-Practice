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
  vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    vector<int> row;  // to add nodes
    if (root == NULL)
      return ans;
    queue<TreeNode*> q;
    q.push(root);  // first push root

    while (!q.empty()) {  // the time we get row empty, it means we reached leaf
      int count = q.size();  // count keeps eye on nodes to be processed of a
                             // particular row & runs loop uptil becomes 0.

      while (count) {
        auto temp = q.front();     // add nodes in queue.
        row.push_back(temp->val);  // push values of nodes
        //  cout<<"node= "<<temp->val<<endl;
        q.pop();
        count--;
        if (temp->left)
          q.push(temp->left);
        if (temp->right)
          q.push(temp->right);  //[9,20];
      }

      ans.push_back(row);
      row.clear();
      //  cout<<"#";
    }
    return ans;
  }
};