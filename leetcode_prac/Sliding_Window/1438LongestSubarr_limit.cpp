class Solution {
 public:
  int longestSubarray(vector<int>& nums, int limit) {
    int i = 0, j;
    multiset<int> ms;
    for (j = 0; j < nums.size(); ++j) {
      ms.insert(nums[j]);
      if (*ms.rbegin() - *ms.begin() > limit)
        ms.erase(ms.find(nums[i++]));
    }
    return j - i;
  }
};

/*
Use one tree map can easily get the maximum and the minimum at the same time.
Time O(NogN)
Space O(N)
*/

class Solution {
 public:
  int longestSubarray(vector<int>& nums, int limit) {
    int i = 0, j;
    deque<int> maxx, minn;
    for (j = 0; j < nums.size(); j++) {
      while (!maxx.empty() && nums[j] > maxx.back())
        maxx.pop_back();
      while (!minn.empty() && nums[j] < minn.back())
        minn.pop_back();

      maxx.push_back(nums[j]);
      minn.push_back(nums[j]);

      if (maxx.front() - minn.front() > limit) {
        if (maxx.front() == nums[i])
          maxx.pop_front();
        if (minn.front() == nums[i])
          minn.pop_front();
        ++i;
      }
    }
    return j - i;
  }
};