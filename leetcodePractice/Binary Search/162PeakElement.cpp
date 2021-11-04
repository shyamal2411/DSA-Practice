#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/find-peak-element/
class Solution {
public:
    //Time: O(logN)
    //Space: O(1)
    int findPeakElement(vector<int>& nums) {
        return search(nums, 0, nums.size()-1);
    }
    
    int search(vector<int> &nums, int l, int r){
        if(l==r)
            return l;
        int mid=(r+l)/2;
        if(nums[mid]>nums[mid+1])
            return search(nums, l, mid);
        return search(nums, mid+1, r);
    }

    //Time: O(n)
    //Space: O(1)
    int findPeakElementN(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1])
                return i;
        }
        return nums.size() - 1;
    }
};

int main(){
    Solution s;
    vector<int> nums={1,2,3,1};
    cout<<s.findPeakElement(nums)<<endl;
    return 0;
}