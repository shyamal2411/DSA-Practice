#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        //We are starting iteration from 1 because we take prices[i]-prices[i-1], now if we start from 0, prices[i-1] would give runtime error
        for(int i=1;i< prices.size();i++){
            if(prices[i]>prices[i-1]){
                maxProfit += prices[i]-prices[i-1];}
        }
        return maxProfit;
    }
};

// Time: O(n)
// Space: O(1)
int main() {
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};
    cout<<s.maxProfit(prices)<<endl;
    return 0;
}
