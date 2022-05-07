#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/132-pattern/
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        stack<int> stk;
        int secMax = INT_MIN;
        for(int i = n - 1; i >= 0; i--){
            if(nums[i] < secMax) return true;
            while(stk.size() > 0 && nums[i] > stk.top()){
                secMax = stk.top();
                // secMax = max(secMax, stk.pop());
                stk.pop();
            }
            stk.push(nums[i]);
        }
        return false;
    }
};

// https://youtu.be/XstAJdzJmVo

int main(){
    Solution ss;
    vector<int> nums = {1,2,3,4};
    // vector<int> nums = {3,1,4,2};
    // vector<int> nums = {-1,3,2,0};
    if(ss.find132pattern(nums))
    cout<<"true\n";
    else
    cout<<"false\n";
}