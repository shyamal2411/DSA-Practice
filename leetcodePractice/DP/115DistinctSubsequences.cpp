#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/distinct-subsequences/
// https://leetcode.com/problems/distinct-subsequences/discuss/1219034/C%2B%2B-LCS-variation-easy-to-understand
class Solution
{ 
    public:
    int numDistinct(string a, string b)
    {
        int m = a.size(), n = b.size();
        vector<vector<unsigned long long>> dp(m + 1, vector<unsigned long long>(n + 1, 0)); //unsigned long long int is used to avoid overflow for bigger values

        for (int i = 0; i <= m; i++) //if b is empty then there is only 1 subsequence by not including any character from a
            dp[i][0] = 1;

        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (a[i - 1] == b[j - 1])                       //when there is match we can add values of 2 case
                    dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1]; //1. we don't include this character of a 2. we include it
                else
                    dp[i][j] = dp[i - 1][j]; //just use the best value before this character of a
            }
        }
        return dp[m][n]; //return best value
    }
};

//main function