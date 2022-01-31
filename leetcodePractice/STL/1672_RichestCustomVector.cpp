#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/richest-customer-wealth/
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for(auto acc: accounts){
            int current = 0;
            for(auto i: acc)
                current += i;
            
            ans = max(ans, current);
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<vector<int>> accounts = {{1,2,3},{3,2,1},{1,2,4}};
    cout<<s.maximumWealth(accounts)<<endl;
    return 0;
}