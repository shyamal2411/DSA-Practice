#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/single-element-in-a-sorted-array/
class Solution{
public:
    int permuteUnique(vector<int> &nums){
        map<int, int> mp;
        int ans=0;
        if(nums.empty()) return ans;
        for(auto i: nums){
            mp[i]++;
        }
        for(auto i: mp){
            if(i.second == 1){
            ans = i.first;
            break;
            }
        }
        return ans;
    }
};

int main(){
    Solution ss;
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    cout<<ss.permuteUnique(nums);
    return 0;
}