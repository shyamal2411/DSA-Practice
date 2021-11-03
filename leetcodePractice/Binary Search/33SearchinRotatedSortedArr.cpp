#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/search-in-rotated-sorted-array/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(target==nums[mid])
                return mid;
            //Rotation exists: Mid element is in left side
            if(nums[mid]>nums[r]){
                if(target<nums[mid] && target>=nums[l])
                    r=mid-1;
                else
                    l=mid+1;
            }
            //Rotation exists: Mid element is in right side
            else if(nums[mid]<nums[l]){
                if(target>nums[mid] && target<=nums[r])
                    l=mid+1;
                else
                    r=mid-1;
            }
            //No rotation, normal BS
            else{
                if(target<nums[mid])
                    r=mid-1;
                else
                    l=mid+1;
            }
        }
        return -1;
    }
};

int main(){
    Solution s;
    vector<int> nums={4,5,6,7,0,1,2};
    cout<<s.search(nums,0)<<endl;
    return 0;
}