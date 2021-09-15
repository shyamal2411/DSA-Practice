#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/maximum-sum-circular-subarray/
// https://leetcode.com/problems/maximum-sum-circular-subarray/discuss/633090/Short-and-Simple-C%2B%2B-solution-oror-Well-Explained
class Solution
{
public:
    int maxSubarraySumCircular(vector<int> &nums)
    {
        int maxx = INT_MIN, minn = INT_MAX, sum1 = 0, sum2 = 0, tsum = 0;

        for (auto x : nums)
        {
            tsum += x;
            sum1 += x;
            sum2 += x;

            maxx = max(maxx, sum1);
            if (sum1 < 0)
                sum1 = 0;
            minn = min(sum2, minn);
            if (sum2 > 0)
                sum2 = 0;
        }
        if (tsum == minn)
            return maxx;

        return max(maxx, tsum - minn);
    }
};

int main()
{
    // vector<int> nums{4,-3,5,-2,3,-2};
    vector<int> nums{5, -3, 5};
    // vector<int> nums{1,-2,3,-2};
    Solution ss;
    cout << ss.maxSubarraySumCircular(nums) << endl;
    return 0;
}