#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2);
        ans[0]=lower_bound(nums.begin(), nums.end(), target)-nums.begin();
        ans[1]=upper_bound(nums.begin(), nums.end(), target)-nums.begin();

        ans[1]--;
        
        if(ans[0]==nums.size() || nums[ans[0]] != target)
            ans[0]=ans[1]=-1;
        
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums{5,7,7,8,8,10};
    int target=8;
    vector<int> ans=s.searchRange(nums, target);
    for(auto i:ans)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}