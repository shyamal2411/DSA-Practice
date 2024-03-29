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

class Solution
{
public:

  TreeNode* invertTree2(TreeNode* root) {
    if (!root)
      return NULL;
    TreeNode* node = root->right;
    root->right = invertTree2(root->left);
    root->left = invertTree2(node);

    return root;
  }

// BOTH WAY WORKS - EITHER TAKE NODE AS LEFT OR RIGHT

    TreeNode* invertTree3(TreeNode* root) {
        if(!root) return NULL;
        TreeNode* node=root->left;
        root->left=invertTree(root->right);
        root->right=invertTree(node);

        return root;
    }

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
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    ss.invertTree(root);

    return 0;
}
