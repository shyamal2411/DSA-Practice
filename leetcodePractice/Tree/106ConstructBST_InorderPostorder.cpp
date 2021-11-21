#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/
// https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/discuss/1389630/C%2B%2B-solution-Using-Recursion-and-Map-with-Explanation(90.33-faster)
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
    unordered_map<int, int> mp;
    
    TreeNode* solve(vector<int> &inorder, vector<int> &postorder, int start, int end, int &postind){
     if(start > end) 
         return NULL;
        int inorderind = mp[postorder[postind]];
        
        TreeNode* root = new TreeNode(inorder[inorderind]);
        (postind)--;
        
        root -> right = solve(inorder, postorder, inorderind + 1, end, postind);
        root -> left = solve(inorder, postorder, start, inorderind - 1, postind);
        
        return root;
    }
    
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i = 0; i<inorder.size(); i++)
            mp[inorder[i]] = i;
        
        int postind = postorder.size() - 1;
        return solve(inorder, postorder, 0, postorder.size() - 1, postind);
    }
};

int main(){
    Solution s;
    vector<int> inorder = {9,3,15,20,7};
    vector<int> postorder = {9,15,7,20,3};
    TreeNode* root = s.buildTree(inorder, postorder);
    cout<<root->val<<endl;
    return 0;
}