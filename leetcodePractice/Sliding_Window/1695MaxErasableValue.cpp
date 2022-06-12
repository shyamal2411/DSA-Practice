#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/maximum-erasure-value/
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = size(nums), curSum = 0, ans = 0, left = 0, right = 0;
	unordered_set<int> s;
	while(right < n) {
		while(s.find(nums[right]) != end(s))          // delete from current sub-array till there's a duplicate of nums[right]
			curSum -= nums[left], s.erase(nums[left++]);
		curSum += nums[right], s.insert(nums[right++]);  // pick nums[right] and update curSum
		ans = max(ans, curSum);                  // finally update ans to hold the maximum of all subarray sums till now
	}
	return ans;

    }
};

int main(){
    Solution ss;
    // vector<int> nums = {4,2,4,5,6};
    vector<int> nums = {5,2,1,2,5,2,1,2,5};
    cout<<ss.maximumUniqueSubarray(nums);
    return 0;
}