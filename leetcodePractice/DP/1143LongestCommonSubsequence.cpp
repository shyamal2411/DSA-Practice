#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // int longestCommonSubsequence(string text1, string text2) {
    //     unordered_map<char, int> m1,m2;
    //     int count=0;
    //     for(auto n: text1)
    //         m1[text1[n]]++;

    //    for(auto m: text2)
    //        m1[text2[m]]++;

    //     for(auto itr:m1)
    //     if(m1->second==2)
    //         count++;

    //     return count;
    // }

    int longestCommonSubsequence(string text1, string text2)
    {
        int n = text1.size();
        int i, j, m = text2.size();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= m; j++)
            {
                if (text1[i - 1] == text2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[n][m];
    }
};

int main()
{
    Solution s;
    string text1 = "abcde";
    string text2 = "ace";
    cout << s.longestCommonSubsequence(text1, text2);
    return 0;
}