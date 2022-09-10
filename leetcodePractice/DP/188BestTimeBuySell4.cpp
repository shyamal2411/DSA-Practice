#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/
typedef vector<int> vi;
typedef vector<string> vst;

class Solution {
public:
   int maxProfit(int k, vi& prices) {

   if (k >= prices.size() / 2) { // if k >= n/2, then you can make maximum number of transactions
        int profit = 0;
        for (int i = 1; i < prices.size(); i++)
            if (prices[i] > prices[i - 1]) profit += prices[i] - prices[i - 1];
        return profit;
    }
   vi buy(k+1,INT_MAX);
   vi sell(k + 1,0);

    for (int price : prices) {
        for (int i = 1; i <= k; i++) {
            buy[i] = min(buy[i], price-sell[i - 1]);
            sell[i] = max(sell[i], price-buy[i]);
        }
    }
    return sell[k];
}
};

int main(){
Solution ss;
vi vec = {2,4,1};
cout<<ss.maxProfit(2, vec);
return 0;
}