#include<bits/stdc++.h>
using namespace std;


// https://leetcode.com/problems/path-sum-iii/
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
    int pathSum(TreeNode* root, int targetSum) {
        if(!root)
            return 0;
        
        return find(root, 0, targetSum) + pathSum(root->left, targetSum) + pathSum(root->right, targetSum);
                   
    }
    
    int find(TreeNode* root, int sum, int &target){
        if(!root)
            return 0;
        
        sum+=root->val;
        
        if(sum==target)
            return 1+ find(root->left, sum, target) + find(root->right, sum, target);
        else
            return find(root->left, sum, target) + find(root->right, sum, target);
    }
};

int main(){
    Solution s;
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->right->right->left = new TreeNode(5);
    root->right->right->right = new TreeNode(1);
    cout<<s.pathSum(root, 22);
    return 0;
}