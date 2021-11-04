#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/find-the-duplicate-number/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        
            if(mp[nums[i]]>1)
                return nums[i];
        }
        return -1;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,3,4,2,2};
    cout<<s.findDuplicate(nums);
    return 0;
}