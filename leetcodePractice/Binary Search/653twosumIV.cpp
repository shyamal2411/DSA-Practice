
class Solution {
 public:
  void inorder(TreeNode* root, vector<int>& nums) {
    if (!root)
      return;
    inorder(root->left, nums);
    nums.push_back(root->val);
    inorder(root->right, nums);
  }

  bool findTarget(TreeNode* root, int k) {
    // firstly, to get the the sorted vector or arr, we perform inorder
    vector<int> nums;  // to store the values of nodes.
    inorder(root, nums);
    // now simple binary search as  we do
    for (int i = 0, j = nums.size() - 1;
         i < j;) {  // no increment, decrement, because we do it inside loop
      if (nums[i] + nums[j] == k)
        return true;
      if (nums[i] + nums[j] < k)
        i++;
      else
        j--;
    }
    return false;
  }
};