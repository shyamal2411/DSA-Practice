#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/subarray-sum-equals-k/
class Solution {
public:
   int subarraySum(vector<int>& nums, int k) {
        std::unordered_map<int, int> seen = {{0, 1}};
        int count = 0, sum = 0;
        for (auto n: nums) {
            sum += n;
            count += seen[sum - k];
            seen[sum]++;
        }
        return count;
    }

    
     int subarraySum2(vector<int>& nums, int k) {
        int cum=0; // cumulated sum
        map<int,int> rec; // prefix sum recorder
        int cnt = 0; // number of found subarray
        rec[0]++; // to take into account those subarrays that begin with index 0
        for(int i=0;i<nums.size();i++){
            cum += nums[i];
            cnt += rec[cum-k];
            rec[cum]++;
        }
        return cnt;
    }
};

/*
Explanation: we keep an accumulator variable sum with the running total of the sum of numbers; 
we then check if we have already met that values using our seen hashmap that acts more or less like a frequency table,
 storing how many times we have encountered a specific value: sum - k.
That is why if have met sum - k before and now the value is sum, the difference between those specific points and the current iteration is, 
by definiton, exactly k: we are now at sum, so, the interval between the previous point(s) and now sums up to, by definition, sum - (sum - k), which equates k.

We collect all those occurrences in count and finally we return it.
*/
int main(){
    Solution s;
    vector<int> nums = {1,1,1};
    int k = 2;
    cout<<s.subarraySum(nums, k)<<endl;
    return 0;
}