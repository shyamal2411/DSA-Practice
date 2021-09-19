#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/solution/
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int cash=0, hold=-prices[0];
        for(int i = 1;i < prices.size(); i++){
            cash = max(cash, hold + prices[i] - fee);
            hold = max(hold, cash - prices[i]);
        }
        return cash;
    }
};

int main(){
    //int a[5] = {1, 2, 3, 4, 5};
    // vector<int> p = {1, 3, 2, 8, 4};
    vector<int> p = {1,3,2,8,4,9};
    int fee = 2;
    Solution ss;
    cout<< ss.maxProfit(p, fee)<<endl;
    return 0;
}