#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/perfect-squares/
// https://leetcode.com/problems/perfect-squares/discuss/1520447/c%2B%2B-dp-easy-to-understand
class Solution
{
public:
    int numSquares(int n)
    {
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        int count = 1;
        while (count * count <= n)
        {
            int sq = count * count;
            for (int i = sq; i < n + 1; i++)
            {
                dp[i] = min(dp[i - sq] + 1, dp[i]);
            }
            count++;
        }
        return dp[n];
    }
    // IMP: IF WE KEEP SQ=COUNT*COUNT OUTSIDE THE WHILE LOOP, IT GIVES TLE, DECLARING SQ INSIDE
    // THE WHILE LOOP RESULTS AC!

    const int INF = 1e9 + 9;
    int numSquares2(int n)
    {
        vector<int> ans;
        for (int i = 1; i * i <= n; i++)
        {
            ans.push_back(i * i);
        }
        vector<int> dp(n + 1, INF);
        dp[0] = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < ans.size(); j++)
            {
                if (i >= ans[j] && dp[i] > dp[i - ans[j]] + 1)
                    dp[i] = dp[i - ans[j]] + 1;
            }
        }
        return dp[n];
    }
};

int main()
{
    Solution s;
    cout << s.numSquares(12) << endl;
    cout<<s.numSquares2(20)<<endl;
    // cout<<s.numSquares(5)<<endl;
    return 0;
}