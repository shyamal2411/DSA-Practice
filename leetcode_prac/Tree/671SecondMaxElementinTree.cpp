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
    set<int> st;
    
    void inorder(TreeNode* root){
        if(!root)
            return;
        
        inorder(root->left);
        st.insert(root->val);
        inorder(root->right);
    }
    /*here we're using set because we need sorted array & set stores sorted array by default so. */
    int findSecondMinimumValue(TreeNode* root) {
        inorder(root);
    /*inorder because we need ascending elements*/
        if(st.size()<2) //as last line
            return -1;
        
        auto it =   st.begin();
        it++;
        
        return *it;
    }
};

int main(){
    Solution ss;
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(7);
    root->right->left = new TreeNode(11);
    root->right->right = new TreeNode(15);
    cout<<ss.findSecondMinimumValue(root)<<endl;
    return 0;
}