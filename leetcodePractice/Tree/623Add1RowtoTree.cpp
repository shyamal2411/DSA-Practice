#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
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
    void dfs(TreeNode *root, int currDepth, int depth, int val)
    {        
        if (root == NULL) return;

        // if we are at depth - 1, then we have to insert the new node
        if (currDepth == depth - 1)
        {
            TreeNode *prevLeft = root->left;
            TreeNode *prevRight = root->right;

            TreeNode *newNodeLeft = new TreeNode(val);
            TreeNode *newNodeRight = new TreeNode(val);
            // update root -> left and root -> right
            root->left = newNodeLeft;
            root->right = newNodeRight;
            // merge the root's left subtree and root's right subtree
            root->left->left = prevLeft;
            root->right->right = prevRight;
            return;
        }

        dfs(root->left, currDepth + 1, depth, val);
        dfs(root->right, currDepth + 1, depth, val);
    }

    TreeNode *addOneRow(TreeNode *root, int val, int depth)
    {
        if (root == NULL)
            return NULL;

        if (depth == 1)
        {
            TreeNode *newNode = new TreeNode(val);
            newNode->left = root;
            return newNode;
        }
        dfs(root, 1, depth, val);
        return root;
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
    ss.addOneRow(root, 3,5);
    return 0;
}