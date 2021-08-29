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


//https://leetcode.com/problems/maximum-product-of-splitted-binary-tree/discuss/496549/JavaC%2B%2BPython-Easy-and-Concise

class Solution{  
public:
    long ans = 0, total = 0, sub;
    int maxProduct(TreeNode* root) {
        total = help(root), help(root);
        return ans % (int)(1e9 + 7);
    }

    int help(TreeNode* root) {
        if (!root) return 0;
        sub = root->val + help(root->left) + help(root->right);
        ans = max(ans, sub * (total - sub));
        return sub;
    }
    
};


// THE BELOW APPROACH ISN'T WORKING
class Solutionn {
public:
    int total=0, ans=0;
    
    int help(TreeNode* root){
        if(!root)
            return 0;
        
        return help(root->left) + help(root->right) + root->val;
    }
    
    int help2(TreeNode* root){
        if(!root) return 0;
        int left=help(root->left);
        int right=help(root->right);
        int up=total-left-right-root->val;
        int op1=(left*(long long)root->val+right+up);
        int op2=(right*(long long)root->val+left+up);
        int op3=(up*(long long)root->val+left+right);
    
        ans=max(ans, max(op1, max(op2, op3)));
        return left+right+root->val;
    }
    
    int maxProduct(TreeNode* root) {
        total=help(root);
        help(root);
        return ans%1000000007;
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
    cout<<ss.maxProduct(root);
    return 0;
}