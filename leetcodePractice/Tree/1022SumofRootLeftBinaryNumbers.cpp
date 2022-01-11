#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/
// https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/discuss/1340184/C%2B%2B-DFS-Solution-Super-OP-to-Understand-(Descriptive)-!
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
    int sum = 0;
    int sumRootToLeaf(TreeNode* root) {
        traverse(root, 0);
        return sum;
    }
    void traverse(TreeNode* root, int val){
        if(!root)
            return;
        
        val = val << 1 | root -> val;
        traverse(root -> left, val);
        traverse(root -> right, val);
        
        if(root -> left == NULL && root -> right == NULL)
            sum += val;
    }
};

int main(){
    Solution ss;
    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(0);
    root -> right = new TreeNode(1);
    root -> left -> left = new TreeNode(0);
    root -> left -> right = new TreeNode(1);
    root -> right -> left = new TreeNode(0);
    root -> right -> right = new TreeNode(1);
    cout<<ss.sumRootToLeaf(root)<<endl;
    return 0;
}