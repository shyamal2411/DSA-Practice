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

class Solution2 {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int in =lower_bound(nums, target);
        int im =lower_bound(nums, target+1)-1;
        if(in<nums.size() && nums[in]==target)
            return {in, im};
        else
            return {-1, -1};
        }
    int lower_bound(vector<int> &nums, int target){
        int left=0, right=nums.size()-1;
        while(left<=right){
            int mid=left + (right-left)/2;
            if(nums[mid]<target)
                left=mid+1;
            else
                right=mid-1;
        }
        return left;
    }
};

int main(){
    Solution2 s;
    vector<int> nums{5,7,7,8,8,10};
    int target=8;
    vector<int> ans=s.searchRange(nums, target);
    for(auto i:ans)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}