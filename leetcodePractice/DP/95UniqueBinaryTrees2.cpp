#include<bits/stdc++.h>
using namespace std;

// UNIQUE BINARY TREES 2
// Same as Unique Binary Trees but with a twist.
// https://leetcode.com/problems/unique-binary-search-trees-ii/
class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:

      vector<TreeNode*> solve(int start,int end)
    {
        vector<TreeNode*> help;
        if(start>end)
        {
            help.push_back(NULL);
            return help;
        }
        for(int i=start;i<=end;i++)
        {
            vector<TreeNode*> left=solve(start,i-1);
            vector<TreeNode*> right=solve(i+1,end);
            for(int j=0;j<left.size();j++){
                TreeNode* leftt=left[j];
                for(int k=0;k<right.size();k++){
                    TreeNode* rightt=right[k];
                    TreeNode* n=new TreeNode(i);//new node for i-th element
                    n->left=leftt;
                    n->right=rightt;
                    help.push_back(n);
                }
            }
        }
        return help;
    }
    vector<TreeNode*> generateTrees(int n) {
        int start=1;
        int end=n;
        vector<TreeNode*> help=solve(start,end);
        return help;
    }
};

int main()
{
    int n;
    cin>>n;
    Solution s;
    vector<TreeNode*> ans=s.generateTrees(n);
    for(int i=0;i<ans.size();i++)
    {
        TreeNode* root=ans[i];
        cout<<root->val<<endl;
        cout<<root->left->val<<endl;
        cout<<root->right->val<<endl;
    }
    return 0;
}