#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
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
    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        inorder(root, nums);
        return findTargethelp(nums, k);
    }
    
    void inorder(TreeNode* root, vector<int>& nums){
        if(!root)
            return;
        inorder(root->left, nums);
        nums.push_back(root->val);
        inorder(root->right, nums);
    }
    
    bool findTargethelp(vector<int> a, int target){
        for(int i=0, j=a.size()-1;i<j;){
            int sum=a[i]+a[j];
            if(sum==target)
                return true;
            else if(sum<target)
                i++;
            else
                j--;
        }
        return false;
    }
};
//METHOD-2
/*
The idea is to use a sorted array to save the values of the nodes in the BST by using an inorder traversal. 
Then, we use two pointers which begins from the start and end of the array to find if there is a sum k.

Time Complexity: O(n), Space Complexity: O(n).
*/
class Solution2 {
public:
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> set;
        return dfs(root, set, k);
    }
    
    bool dfs(TreeNode* root, unordered_set<int>& set, int k){
        if(!root)
            return false;
        if(set.count(k-root->val))
            return true;
        set.insert(root->val);
        return dfs(root->left, set, k) || dfs(root->right, set, k);
    }
};
/*
This method also works for those who are not BSTs. The idea is to use a hashtable to save the values of the nodes in the BST. 
Each time when we insert the value of a new node into the hashtable, we check if the hashtable contains k - node.val.

Time Complexity: O(n), Space Complexity: O(n).

*/

//METHOD-3
class Solution3{
public:
  bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        inorder(root, nums);
        for(int i = 0, j = nums.size()-1; i<j;){
            if(nums[i] + nums[j] == k)return true;
            (nums[i] + nums[j] < k)? i++ : j--;
        }
        return false;
    }
    
    void inorder(TreeNode* root, vector<int>& nums){
        if(root == NULL)return;
        inorder(root->left, nums);
        nums.push_back(root->val);
        inorder(root->right, nums);
    }
};

int main(){
    TreeNode* root=new TreeNode(5);
    root->left=new TreeNode(3);
    root->right=new TreeNode(6);
    root->left->left=new TreeNode(2);
    root->left->right=new TreeNode(4);
    root->right->right=new TreeNode(7);
    Solution ss;
    cout<<ss.findTarget(root, 9);
    return 0;
}