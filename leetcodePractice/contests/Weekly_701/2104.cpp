#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/contest/weekly-contest-271/problems/sum-of-subarray-ranges/
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans = 0;
        for(int i = 0; i < nums.size(); i++){
        int maxx = nums[i], minn = nums[i];
            for(int j = i; j < nums.size(); j++){
                maxx = max(maxx, nums[j]);
                minn = min(minn, nums[j]);
                ans += maxx - minn;
            }
            }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,2,3,4};
    cout << s.subArrayRanges(nums) << endl;
    return 0;
}