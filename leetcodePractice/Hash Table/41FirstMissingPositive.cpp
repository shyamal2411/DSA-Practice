#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/first-missing-positive/
class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        int m = INT_MIN;
        unordered_set<int> ss;
        for (int i = 0; i < nums.size(); i++)
        {
            ss.insert(nums[i]);
            m = max(m, nums[i]);
        }
        int ans = 0;
        for (int i = 1; i <= m; i++)
        {
            if (ss.find(i) == ss.end())
            {
                ans = i;
                return ans;
            }
        }
        if (m < 0)
            return 1;
        return m + 1;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 0};
    cout << s.firstMissingPositive(nums);
    return 0;
}