#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        if (prices.size() == 1)
        {
            return 0;
        }
        //initialise two vector for storing the value after buying and selling stock...
        vector<int> buy(n, 0);
        vector<int> sell(n, 0);
        //we bought first stock 0n very first day
        buy[0] = -prices[0];
        //no profit on first day
        sell[0] = 0;
        //on  second day check ehich day will give you more profit on buying stock 1st day/2nd day
        buy[1] = max(-prices[0], -prices[1]);
        //check if you can sell your stock on 2nd day or not with some profit
        sell[1] = max(0, -prices[0] + prices[1]);
        for (int i = 2; i < n; i++)
        {
            //you have to make desicion either you can buy stock or not i.e YOU HAVE TO SELL I-2TH ITEM TO SELL THE ITH ITEM- "COOLDOWN PERIOD".
            // so you need to choose wisely that if you can make more profit on buying ith stock or not.
            buy[i] = max(buy[i - 1], sell[i - 2] - prices[i]);
            //simillarly you need to check on which day to sell the stock to make more profit.
            sell[i] = max(sell[i - 1], buy[i - 1] + prices[i]);
        } //return profit after selling nth item.
        return sell[n - 1];
    }
};

// Time  Complexcity - O(N)
// Space Complexcity - O(1)
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/discuss/761797/C%2B%2B-I-Came-Up-With-4-Solution-or-Pick-Up-Best-One
class Solution2 {
public:
   int maxProfit(vector<int>& prices) {     
    int b = INT_MIN,s = 0,sell = 0,buy;
        for(int stock : prices){
            buy = b;
            b = max(b, sell - stock);
            sell = s;
            s = max(s, buy + stock);  
        }
        return s;
    }
};

int main()
{
    Solution2 ss;
    vector<int> nums = {1, 2, 3, 0, 2};
    cout << ss.maxProfit(nums) << endl;
    return 0;
}