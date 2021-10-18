#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/cousins-in-binary-tree/
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
    bool isCousins(TreeNode* root, int x, int y) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
        
        if(root->val == x || root->val == y)
            return false;
        
        int xparent=-1;
        int xHeight = findHeight(root, xparent, x, 0);
        
        int yparent=-1;
        int yHeight=findHeight(root, yparent,  y, 0);
        
        if(xparent!=yparent && yHeight==xHeight)
            return true;
        return false;
    }
    
    int findHeight(TreeNode* curr, int &parent, int value, int height){
        if(!curr)
            return 0;
        if(curr->val==value)
            return height;
        
        parent=curr->val;
        int left = findHeight(curr->left, parent, value, height+1);
        if(left)
            return left;
        parent=curr->val;
        int right = findHeight(curr->right, parent, value, height+1);
        return right;
    } 
    
};

int main(){
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    cout<<s.isCousins(root, 5, 4)<<endl;
    return 0;
}