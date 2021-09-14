#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/jump-game/
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {

        int lastGoodIndex = nums.size() - 1;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (i + nums[i] >= lastGoodIndex)
            {
                lastGoodIndex = i;
            }
        }
        return lastGoodIndex == 0;
    }
};

int main()
{
    Solution ss;
    // vector<int> nums = {2, 3, 1, 1, 4};
    vector<int> nums = {3, 2, 1, 0, 4};
    if (ss.canJump(nums))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}