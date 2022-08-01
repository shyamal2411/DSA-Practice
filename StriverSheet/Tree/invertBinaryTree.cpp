
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    //     TreeNode* invertTree(TreeNode* root) {
    //          if(!root)
    //             return NULL;

    //         TreeNode* node=root->left;
    //         root->left=invertTree(root->right);
    //         root->right=invertTree(node);
    //         return root;
    //     }

    TreeNode *invertTree(TreeNode *root)
    {
        //         use level order Traversal as alternative of recursion, because recursion might fail for bigger trees (occupying stack memory)

        if (nullptr == root)
            return root;

        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode *node = q.front();
            q.pop();
            if (node->left != nullptr)
            {
                q.push(node->left);
            }
            if (node->right != nullptr)
            {
                q.push(node->right);
            }
            TreeNode *tmp = node->left;
            node->left = node->right;
            node->right = tmp;
        }
        return root;
    }
};

int main()
{
    Solution ss;
    vector<int> vec = {};
    return 0;
}