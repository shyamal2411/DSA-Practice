#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/minimum-size-subarray-sum/
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return 0;
        int ans = INT_MAX;
        vector<int> sum(n + 1, 0);

        for (int i = 1; i <= n; i++)
            sum[i] = sum[i - 1] + nums[i - 1];
        for (int i = 1; i <= n; i++)
        {
            int toFind = target + sum[i - 1];
            auto bound = lower_bound(sum.begin(), sum.end(), toFind);
            if (bound != sum.end())
            {
                ans = min(ans, static_cast<int>(bound - (sum.begin() + i - 1)));
            }
        }
        return (ans != INT_MAX) ? ans : 0;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    cout << s.minSubArrayLen(7, nums);
    return 0;
}