#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/target-sum/
// https://leetcode.com/problems/target-sum/discuss/388449/Easy-to-understand-DP-solution-with-the-graph
// https://leetcode.com/problems/target-sum/discuss/455024/DP-IS-EASY!-5-Steps-to-Think-Through-DP-Questions.
class Solution {
public:
    int count=0;
    
public:
    void calculate(vector<int>& nums, int i, int sum, int target){
        if(i==nums.size()){
            if(sum==target){
                count++;
                }
        }else{
            calculate(nums, i+1, sum+nums[i], target);
            calculate(nums, i+1, sum-nums[i], target);
        }        
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        calculate(nums, 0, 0, target);
        return count;
    }
};
//Time: O(2^n)
//Space: O(n)

int main(){
    Solution ss;
    vector<int> nums = {1, 1, 1, 1, 1};
    int target = 3;
    cout<<ss.findTargetSumWays(nums, target);
    return 0;
}