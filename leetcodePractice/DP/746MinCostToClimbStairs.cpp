#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/min-cost-climbing-stairs/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1); //dp[i] is min cost to reach goal
        for(int i=2;i<=n;i++){
            int jumpOne=dp[i-1]+cost[i-1]; //min cost if we jump 1 step from (i-1)th to ith step
            int jumpTwo=dp[i-2]+cost[i-2];//min cost if we jump 2 step from (i-2)th to ith step
            dp[i]=min(jumpOne, jumpTwo);
        }
        return dp[n];
    }
};

int main()
{
    vector<int> cost;
    cost.push_back(10);
    cost.push_back(15);
    cost.push_back(20);
    Solution obj;
    int ans=obj.minCostClimbingStairs(cost);
    cout<<"Min cost to reach the top is "<<ans<<endl;
}