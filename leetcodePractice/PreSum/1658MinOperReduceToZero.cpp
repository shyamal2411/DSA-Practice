#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int sum = 0;
        // for(int i : nums) sum += i;
        sum = accumulate(nums.begin(), nums.end(), 0);
        int target = sum - x;
        int currSum = 0, maxLen = 0, endInd = 0, startInd = 0;
        bool found = false;
        
        for(endInd = 0; endInd < n; endInd++){
            currSum += nums[endInd];
            while(startInd <= endInd && currSum > target){
                currSum -= nums[startInd];
                startInd ++;
            }
            if(currSum == target){
                found = true;
                maxLen = max(maxLen, endInd - startInd+1);
            }
        }
        return found ? n - maxLen : - 1;
    }
};

int main(){
    Solution ss;
    vector<int> nums = {1,1,4,2,3};
    cout<<ss.minOperations(nums, 5);
    return 0;
}