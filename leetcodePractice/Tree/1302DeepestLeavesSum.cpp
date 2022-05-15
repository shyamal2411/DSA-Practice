#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/deepest-leaves-sum/
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
    int deepestLeavesSum(TreeNode* root) {
        int sum = 0;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int sz = q.size();
            sum = 0;
            
            for(int i=0; i<sz; i++)
            {
                TreeNode* front = q.front();
                q.pop();
                
				//calculate current level's sum
				
                sum += front->val;
                
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
        }
		//this will eventually have the sum of the last level which will be our answer
		
        return sum;
    }
};

int main(){
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->left->left->left = new TreeNode(8);
    root->left->left->right = new TreeNode(9);
    root->left->right->left = new TreeNode(10);
    root->left->right->right = new TreeNode(11);
    root->right->left->left = new TreeNode(12);
    cout<<s.deepestLeavesSum(root);
    return 0;
}