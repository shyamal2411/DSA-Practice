#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/jump-game-ii/
// This recursive solution doesn't work for large input
// [6,2,6,1,7,9,3,5,3,7,2,8,9,4,7,7,2,2,8,4,6,6,1,3] this test case doesn't pass with this one
class Solution1
{
public:
    long long int jump(vector<int> nums, int curr, int dest)
    {
        if (curr >= dest)
        {
            return 0;
        }
        long long int temp = INT_MAX;
        //find min steps need to reach to end

        for (int i = 1; i <= nums[curr]; i++)
        {
            temp = min(temp, 1 + jump(nums, curr + i, dest));
        }
        return temp;
    }

    int jump(vector<int> &nums)
    {
        return jump(nums, 0, nums.size() - 1);
    }
};

class Solution2
{
public:
    long long int jump(vector<int> &nums, int curr, int dest, vector<int> &dp)
    {
        if (curr == dest)
            return 0;
        if (dp[curr] != -1)
            return dp[curr];
        long long int temp = INT_MAX;

        for (int i = 1; i <= nums[curr]; i++)
        {
            if (i + curr > dest)
                break;
            temp = min(temp, 1 + jump(nums, curr + i, dest, dp));
        }
        dp[curr] = temp;
        return temp;
    }

    int jump(vector<int> &nums)
    {
        vector<int> dp(nums.size(), -1);
        return jump(nums, 0, nums.size() - 1, dp);
    }
};

class Solution3
{
public:
    int jump(vector<int> &nums)
    {
        if (nums.size() < 2)
            return 0;

        int jump = 1, n = nums.size(), curjump = nums[0], mxjump = nums[0];
        //till we reach last index, NOTE: not necessary to crp=oss last index
        int i = 0;
        while (i < n - 1)
        {
            mxjump = max(mxjump, i + nums[i]);
            if (curjump == i)
            {                     // we have to take jump now because our curjump now ends
                jump++;           // increment in jump
                curjump = mxjump; //assign new maxjump to currjump
            }
            i++;
        }
        return jump;
    }
};

int main()
{
    Solution3 ss;
    // vector<int> nums= {2,3,1,1,4};
    vector<int> nums = {6, 2, 6, 1, 7, 9, 3, 5, 3, 7, 2, 8, 9, 4, 7, 7, 2, 2, 8, 4, 6, 6, 1, 3};
    cout << ss.jump(nums) << endl;
    return 0;
}