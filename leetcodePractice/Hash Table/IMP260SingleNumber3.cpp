#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/single-number-iii/
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }            
        for(auto i:mp){
            if(i.second==1)
            ans.push_back(i.first);
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums={1,2,1,3,2,5};
    vector<int> ans=s.singleNumber(nums);
    for(auto i:ans)
    cout<<i<<" ";
    return 0;
}