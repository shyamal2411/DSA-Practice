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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> aResult;
        vector<int> aList;
        help(aResult, root, targetSum, aList);
        return aResult;
    }
    
    void help(vector<vector<int>> &pResult, TreeNode* root, int targetSum, vector<int> &pList){
        if(root==NULL)
            return;
        
        targetSum-=root->val;
        pList.push_back(root->val);
        
        if(!root->left && !root->right && targetSum==0)
            pResult.push_back(pList);
        
        if(root->left)
            help(pResult, root->left, targetSum, pList);
        
        if(root->right)
            help(pResult, root->right, targetSum, pList);
        
        pList.pop_back();
        
    }
};

int main(){
    Solution s;
    TreeNode *root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);
    root->right->left=new TreeNode(6);
    root->right->right=new TreeNode(7);
    vector<vector<int>> result=s.pathSum(root,7);
    vector<int>::iterator it;
    for(auto it=result.begin();it!=result.end();it++){
        cout<<"{";
        vector<int>::iterator it2;
        for(it2=it->begin();it2!=it->end();it2++){
            cout<<*it2<<",";
        }
        cout<<"}";
        cout<<endl;
    }
    return 0;
}