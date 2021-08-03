#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
 public:
  int postindex = 0, preindex = 0;

  TreeNode* constructFromPrePost(vector<int>& preorder,vector<int>& postorder) {
    TreeNode* root = new TreeNode(preorder[preindex++]);
    if (root->val != postorder[postindex])
      root->left = constructFromPrePost(preorder, postorder);

    if (root->val != postorder[postindex])
      root->right = constructFromPrePost(preorder, postorder);
    postindex++;
    return root;
  }
};
//main function
int main() {
  Solution mySolution;
  vector<int> preorder = {1, 2, 4, 5, 3, 6};
  vector<int> postorder = {4, 5, 2, 6, 3, 1};
  TreeNode* root = mySolution.constructFromPrePost(preorder, postorder);
  cout << "Root: " << root->val << endl;
  //cout << "Left: " << root->left->val << endl;
  //cout << "Right: " << root->right->val << endl;
  return 0;
}