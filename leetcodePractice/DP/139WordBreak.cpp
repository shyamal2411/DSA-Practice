#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool wordBreak(string s, vector<string> &wordDict)
    {
        if (wordDict.size() == 0)
            return false;

        unordered_set<string> d(wordDict.begin(), wordDict.end());

        // dp[i] is true only if a valid word or sequence of wordDict ends at i
        vector<bool> dp(s.size() + 1, false);
        dp[0] = true;

        for (int i = 1; i <= s.size(); ++i)
        {
            for (int j = i - 1; j >= 0; --j)
            {
                // check only if a valid sequence of wordDict (or a word) ends at j
                if (dp[j])
                {
                    const string sub = s.substr(j, i - j);
                    if (d.count(sub))
                    {
                        // Ending at i is a valid word
                        dp[i] = true;
                        // Others j values might be false
                        // We stop here since there is one valid sequence ending here
                        break;
                    }
                }
            }
        }
        return dp[s.size()];
    }
};