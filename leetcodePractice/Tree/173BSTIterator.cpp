#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/binary-search-tree-iterator/
struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class BSTIterator {
    stack<TreeNode *> stk;
public:
    BSTIterator(TreeNode *root) {
        pushAll(root);
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !stk.empty();
    }

    /** @return the next smallest number */
    int next() {
        TreeNode *tmpNode = stk.top();
        stk.pop();
        pushAll(tmpNode->right);
        return tmpNode->val;
    }

private:
    void pushAll(TreeNode *node) {
        for (; node != NULL; stk.push(node), node = node->left);
    }
};


int main(){
    BSTIterator ss;
    TreeNode* root = new TreeNode(2, new TreeNode(1), new TreeNode(3));
    TreeNode* ans = ss.next();
    return 0;
}