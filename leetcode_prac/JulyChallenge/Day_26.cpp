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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve(nums, 0, nums.size());
    }
    
    TreeNode* solve(vector<int>& nums, int start, int end){
        if(end<=start) 
            return NULL;
        int mid=(start+end)/2;
        
        TreeNode* root=new TreeNode(nums[mid]);
        root->left  = solve(nums, start, mid);
        root->right = solve(nums, mid+1, end);
        
        return root;
    }
    void printTree(TreeNode* root)
    {
    if(root)
      {
        cout<<root->val<<" ";
        printTree(root->left);
        printTree(root->right);
      }
    }
};

int main() {
    vector<int> nums={1,2,3,4,5,6,7};
    // vector<int> nums={1,3};
    // vector<int> nums={-10,-3, 0, 5,9};

    Solution obj;
    TreeNode* root=obj.sortedArrayToBST(nums);
    obj.printTree(root);
    return 0;
}
