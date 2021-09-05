#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/contest/biweekly-contest-60/problems/find-the-middle-index-in-array/
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int leftSum=0, rightSum=0, i;
        for(i=0;i<n;i++)
            rightSum+=nums[i];
        
        for(i=0;i<n;i++){
            rightSum -= nums[i];
            if(leftSum==rightSum)
                return i;
            
            leftSum +=nums[i];
        }
        return -1;
    }
};

int main(){
    Solution s;
    // vector<int> nums={2,3,-1,8,4};
    // vector<int> nums={1,-1,4};
    // vector<int> nums={2,5};
    vector<int> nums={1};
    cout<<s.findMiddleIndex(nums)<<endl;
    return 0;
    }