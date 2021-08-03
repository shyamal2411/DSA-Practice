#include <bits/stdc++.h>
using namespace std;

    class Solution {
    public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if (n < 2)
        return 0;
        if (n == 2)
        return abs(nums[1] - nums[0]);
        int maxdiff = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++)
        maxdiff = max(maxdiff, nums[i + 1] - nums[i]);

        return maxdiff;
    }
    };

int main() {
  Solution s;
  // vector<int> nums{3,6,9,1,2,4,8,0};
  vector<int> nums{3, 6, 9, 1};
  cout << s.maximumGap(nums) << endl;
  return 0;
}