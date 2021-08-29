#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/maximum-binary-tree/

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums, 0, nums.size()-1); //n
    }
    
    TreeNode* helper(vector<int>& nums, int left, int right){
        if(left> right)//1
            return NULL;
        
        int maxIndex=left;
        for(int i=left;i<=right;i++) //n
            if(nums[i]> nums[maxIndex])
                maxIndex=i;
        
        TreeNode* root=new TreeNode(nums[maxIndex]);//1
        root->left=helper(nums, left, maxIndex-1);//n
        root->right=helper(nums, maxIndex+1, right);//n
        return root;
    }
};
/*
Each time we create a node root for the maximum value in the range. Then, we split it into a left range and a right range, which are the left subtree and right subtree of this maximum node root.
*/

int main() {
    Solution s;
    vector<int> nums{3,2,1,6,0,5};
    TreeNode* root=s.constructMaximumBinaryTree(nums);
    cout<<"The maximum value is "<<root->val<<endl;
    return 0;
}
