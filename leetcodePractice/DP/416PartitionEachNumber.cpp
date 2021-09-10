#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/partition-equal-subset-sum/discuss/950659/C%2B%2B-Simple-Dynamic-Programming-Explained-Solution
class Solution
{
public:
    bool canPartition(vector<int> &nums)
    {
        int sum = 0;
        for (auto a : nums)
            sum += a;

        //if sum is odd, sum can never be found
        if (sum & 1)
            return false;

        sum /= 2;
        vector<bool> dp(sum + 1, false);
        //dp keeps track of each number if it has subset or not
        dp[0] = true;

        for (auto a : nums)
        {
            for (int i = sum; i >= a; i--)
            {
                dp[i] = dp[i] || dp[i - a]; // We have two possibilities whether to exclude the current element or include the current element.
            }
        }
        return dp[sum];
    }
};

int main()
{
    Solution s;
    vector<int> nums{1, 5, 11, 5};
    cout << s.canPartition(nums) << endl;
    return 0;
}
/*
Intuition -

If total sum of array elements is odd, no way is possible to get equal sum of two halves.
If sum is even,there can be different combinations possible to attain the solution so we should think if there is a way to get target sum (totalsum/2) from the array elements.
isPossible(target_sum,index) - returns if target_sum can be obtained using array elements nums[0.....index];

-> We have two possibilities whether to exclude the current element or include the current element.

Recursive Relation -
isPossible(target_sum,index) = isPossible(target_sum,index-1) || isPossible(target_sum-nums[index],index-1);


*/