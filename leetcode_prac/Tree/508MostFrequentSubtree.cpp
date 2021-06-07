
class Solution {
 public:
  int util_recursive(TreeNode* root, unordered_map<int, int>& count, int& maxcount) {
    if (!root) 
      return 0;
    
    int sum = util_recursive(root->left, count, maxcount) 
            + root->val +
              util_recursive(root->right, count, maxcount);
      count[sum]++; /*we simply add the sum value into the count map container as a record.*/
    if (maxcount < count[sum]) {   
      maxcount = count[sum]; /*if the count at certain index gets greater than max value, initialize max with that count index. */
    }
    return sum; //return that max index
  }

  vector<int> findFrequentTreeSum(TreeNode* root) {
    unordered_map<int, int> count;
    int maxcount = 0;

    util_recursive(root, count, maxcount);

    vector<int> ans;
    for (const auto& p : count) {
        if (p.second == maxcount) {
        ans.push_back(p.first); //p.second means the sum as returned from util, if that == max value, push its value to vector
      }
    }
    return ans;//return that vector.
  }
};

/*we're using maps because we have to keep the count that 
whether there're 2 diff subtrees with same sum are present or not.
Set can't be used as it doesn't store duplicates, but in map, we can check it.
p.second of map is useful for maxcount of subtree */