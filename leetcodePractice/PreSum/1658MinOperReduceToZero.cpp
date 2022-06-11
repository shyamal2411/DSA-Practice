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

    int minOperations1(vector<int>& nums, int x) {
    int sum = accumulate(begin(nums), end(nums), 0);
    int left = 0, right = 0, ans = INT_MAX, n = nums.size();
    while (left <= right)
        if (sum >= x) {
            if (sum == x)
                ans = min(ans, left + n - right);
            if (right < n)
                sum -= nums[right++];
            else
                break;
        }
        else
            sum += nums[left++];
    return ans == INT_MAX ? -1 : ans;
    }

};

int main(){
    Solution ss;
    vector<int> nums = {1,1,4,2,3};
    cout<<ss.minOperations(nums, 5);
    return 0;
}

/*
We need to make prefix_sum + suffix_sum = x. But instead of this, finding a subarray whose sum is sum(nums) - x will do the job. 
Now we only need to maximize the length of this subarray to minimize the length of prefix + suffix, which can be done greedily. 
By doing this, we can get the minimum length, i.e., the minimum number of operations to reduce x to exactly 0 (if possible).


Let us take a sliding window whose ends are defined by start_idx and end_idx.
If the sum of this sliding window (subarray) exceeds the target, keep reducing 
the window size (by increasing start_idx) until its sum becomes <= target.
If the sum becomes equal to the target, compare the length, and store if it exceeds the previous length.
Return -1 if the sum of the sliding window never becomes equal to target.

*/