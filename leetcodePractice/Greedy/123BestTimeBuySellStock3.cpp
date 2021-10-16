#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/discuss/1523723/C%2B%2B-or-Four-Solutions-%3A-Recursion-Memoization-DP-with-O(N)-space-DP-with-O(1)-Space
class Solution {
public:
    //GIVES TLE IN ONLINE JUDGE
    int solve(vector<int>&prices, int day, int transactionsLeft){
        
        if(day == prices.size()){
            return 0;
        }
        
        if(transactionsLeft == 0){
            return 0;
        }
        
        // choice 1
        // no transaction today
        int ans1 = solve(prices, day + 1, transactionsLeft);
        
        
        // choice 2
        // doing the possible transaction today     
        int ans2 = 0;
        bool buy = (transactionsLeft % 2 == 0);
        
        if(buy == true){ // buy
            ans2 = -prices[day] + solve(prices, day + 1, transactionsLeft - 1);
        }else{ // sell
            ans2 = prices[day] + solve(prices, day + 1, transactionsLeft - 1);
        }
        
        return max(ans1, ans2);
    }
    
    
    int maxProfit(vector<int>& prices) {
        
        int ans = solve(prices, 0, 4); // starting with day 0 and max 4 transactions can be done
        return ans;        
    }
};

// ITERATIVE APPROACH WORKS
class Solution2 {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        
        int sell1=INT_MIN, sell2=INT_MIN;
        int buy1=INT_MAX, buy2=INT_MAX;
        
        for(int i=0;i<n;i++){
            buy1=min(buy1, prices[i]);
            sell1=max(sell1, prices[i]-buy1);
            buy2=min(buy2, prices[i]-sell1);
            sell2=max(sell2, prices[i]-buy2);
        }
        return sell2;
    }
};

int main(){
    
    Solution s;
    vector<int> prices = {1,2,3,0,2};
    cout<<s.maxProfit(prices)<<endl;
    
    return 0;
}