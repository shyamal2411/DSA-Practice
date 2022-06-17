#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/binary-tree-cameras/
typedef vector<int> vi;
typedef vector<string> vst;

struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution 
{
public:
    int res = 0;
    
    int minCameraCover(TreeNode* root) 
    {
        return (dfs(root) < 1 ? 1 : 0) + res;
    }

    int dfs(TreeNode* root) 
    {
        if (!root) return 2;
        int left = dfs(root->left), right = dfs(root->right);
        if (left == 0 || right == 0) 
        {
            res++;
            return 1;
        }
        return left == 1 || right == 1 ? 2 : 0;
    }
};

int main(){
Solution ss;
// vector<int> vec = {};
 Solution s;
    TreeNode* root = new TreeNode(4);
    root -> left = new TreeNode(1);
    root -> right = new TreeNode(6);
    root -> left -> left = new TreeNode(0);
    root -> left -> right = new TreeNode(2);
    root -> right -> left = new TreeNode(5);
    root -> right -> right = new TreeNode(7);
    cout << ss.minCameraCover(root);
    return 0;
}