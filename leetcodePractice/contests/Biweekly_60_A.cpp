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
int findMiddleIndex2(vector<int>& nums) 
    {
    int postfixsum=accumulate(nums.begin(),nums.end(),0); // calculate the sum of the array  
    int prefixsum=0; // initially the prefix sum is =0;
    for(int i=0;i<nums.size();i++)
    {
        postfixsum-=nums[i];//lets the mid element contender be i , subtract it from sum as it should neither be in prefixsum nor in postfixsum.
        if(postfixsum==prefixsum)//check if prefixsum ==postfix sum  if yes return true.
            return i;
        prefixsum+=nums[i];//add the element int orpefix sum since the previous condition was false and this element is no longer the contender of middle index.
    }
        return -1;//if the above condition in the loop was false this pretty much concludes that we have no middle element in our array.
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