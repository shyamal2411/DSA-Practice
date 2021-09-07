#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/coin-change/
// https://leetcode.com/problems/coin-change/discuss/778548/C%2B%2B-DP-solution-explained-~100-Time-100-Space

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        // creating the base dp array, with first value set to 0
        int dp[++amount];
        dp[0] = 0;
        // more convenient to have the coins sorted
        sort(begin(coins), end(coins));
        // populating our dp array
        for (int i = 1; i < amount; i++) {
            // setting dp[0] base value to 1, 0 for all the rest
            dp[i] = INT_MAX;
            for (int c: coins) {
                if (i - c < 0) break;
                // if it was a previously not reached cell, we do not add use it
                if (dp[i - c] != INT_MAX) dp[i] = min(dp[i], 1 + dp[i - c]);
            }
        }
        return dp[--amount] == INT_MAX ? -1 : dp[amount];
    }
};

int main(){
    Solution ss;
    vector<int> s={1,2,5};
    int amount=11;
    cout<<ss.coinChange(s, amount)<<endl;
}