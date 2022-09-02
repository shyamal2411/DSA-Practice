#include<bits/stdc++.h> 
using namespace std;

struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
 public:
  vector<double> averageOfLevels(TreeNode* root) {
    vector<double> ans;
    if (root == NULL)
      return ans;
    vector<vector<int>> v;
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
      vector<int> vec;
      int size = q.size();
      for (int i = 0; i < size; i++) {
        TreeNode* t = q.front();
        q.pop();
        vec.push_back(t->val);
        if (t->left)
          q.push(t->left);
        if (t->right)
          q.push(t->right);
      }
      v.push_back(vec);
      // EVERYTHING IS SAME UPTO HERE.
      double total = 0;
      for (int i = 0; i < vec.size(); i++) {
        total += vec[i];
      }  // add all queue elements
      double r = total / vec.size();
      ans.push_back(r);
    }
    return ans;
  }
};

int main(){
  Solution ss;
  TreeNode* root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->right = new TreeNode(3);
  root->left->left = new TreeNode(4);
  root->left->right = new TreeNode(5);
  root->right->left = new TreeNode(6);
  root->right->right = new TreeNode(7);
  ss.averageOfLevels(root);
 }