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
    // BINARY SEARCH APPROACH - TAKEUFORWARD
    int findSingleElement(vector<int> &nums){
        int n = nums.size();
        int low = 0;
        int high = n-2;

        while(low<=high){
            int mid = (low + high) / 2;
            if(mid%2 == 0){
                if(nums[mid] != nums[mid+1])
                high = mid - 1;
                else
                low = mid + 1;
            } else
            {
                if(nums[mid] == nums[mid+1])
                high = mid - 1;
                else
                low = mid + 1;
            }
        }
        return nums[low];
    }
};

int main(){
    Solution ss;
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    // cout<<ss.permuteUnique(nums);
    cout<<ss.findSingleElement(nums);
    return 0;
}