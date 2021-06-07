
class Solution {
 public:
  int util_recursive(TreeNode* root, unordered_map<int, int>& count, int& maxcount) {
    if (!root) 
      return 0;
    

    int sum = util_recursive(root->left, count, maxcount) 
            + root->val +
              util_recursive(root->right, count, maxcount);
    ++count[sum];
    if (maxcount < count[sum]) {
      maxcount = count[sum];
    }
    return sum;
  }

  vector<int> findFrequentTreeSum(TreeNode* root) {
    unordered_map<int, int> count;
    int maxcount = 0;

    util_recursive(root, count, maxcount);

    vector<int> ans;
    for (const auto& p : count) {
      if (p.second == maxcount) {
        ans.push_back(p.first);
      }
    }
    return ans;
  }
};