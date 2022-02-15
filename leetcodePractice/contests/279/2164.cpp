#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/contest/weekly-contest-279/problems/sort-even-and-odd-indices-independently/
class Solution {
public:
    // typedef vector<int> vi;
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd, even;
        for(int i=0;i<nums.size();i++) {
            if(i % 2 == 0) even.push_back(nums[i]); else odd.push_back(nums[i]);
        }
        
        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(), even.end());
        vector<int> ans;
        int i1 = 0, i2 = 0;
        for(int i=0;i<nums.size();i++) {
            if(i%2 == 0) {
                ans.push_back(even[i1]); i1++; 
            } else {
                ans.push_back(odd[i2]); i2++;
            }
        }
        
        return ans;
    }
};

int main(){
    Solution ss;
    vector<int> nums = {4,1,2,3};
    // cout<<ss.permuteUnique(nums);
    for(auto i: ss.sortEvenOdd(nums)) cout<<i<<" ";
    // cout<<ss.sortEvenOdd(nums);
    return 0;
}