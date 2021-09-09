#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/ones-and-zeroes/
// BEST EXPLANATION & IDEA
// https://leetcode.com/problems/ones-and-zeroes/discuss/121876/C%2B%2B-DP-Knapsack-Approach 
class Solution
{
public:
    int findMaxForm(vector<string> &strs, int m, int n)
    {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        for (auto &s : strs)
        {
            int ones = count(s.begin(), s.end(), '1');
            int zeroes = s.size() - ones;

            for (int i = m; i >= zeroes; i--)
            {
                for (int j = n; j >= ones; j--)
                {
                    dp[i][j] = max(dp[i][j], dp[i - zeroes][j - ones] + 1);
                }
            }
        }
        return dp[m][n];
    }
};

//New trick to define & use vectors
typedef vector<int> v1d;
typedef vector<v1d> v2d;
typedef vector<v2d> v3d;

class Solutionn
{
public:
    int findMaxForm(vector<string> &strs, int m, int n)
    {
        int l = strs.size();
        v3d dp(l + 1, v2d(m + 1, v1d(n + 1, 0))); //dp[l+1][m+1][n+1]

        for (int i = 1; i <= l; i++)
        {
            string s = strs[i - 1];
            int ones = count(s.begin(), s.end(), '1'); //counting all 1s in string
            int zeroes = s.size() - ones;

            for (int j = 0; j <= m; j++)
            {
                for (int k = 0; k <= n; k++)
                {
                    if (j >= zeroes && k >= ones)
                        dp[i][j][k] = max(dp[i - 1][j][k], 1 + dp[i - 1][j - zeroes][k - ones]);
                    else
                        dp[i][j][k] = dp[i - 1][j][k];
                } // k
            }     // j
        }         // i
        return dp[l][m][n];
    }
};

int main()
{
    Solutionn s;
    vector<string> strs{"10", "0001", "111001", "1", "0"};
    int m = 5, n = 3;
    cout << s.findMaxForm(strs, m, n);
    return 0;
}