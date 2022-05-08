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
  bool hasPathSum(TreeNode* root, int targetSum) {
    if (!root)
      return false;
    targetSum -= root->val; /*go on decrementing the sum if it doesn't get 0,
                               then simply false.*/
    if (targetSum == 0 and !root->left and !root->right)
      return true;

    return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
    // if either of the sides then true else false.
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
    int targetSum = 7;
    cout<<ss.hasPathSum(root, targetSum);
    return 0;
}