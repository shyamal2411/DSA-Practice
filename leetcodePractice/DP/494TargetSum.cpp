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

//APPROACH-2
// Start from 0 to end of nums array we can count sum by taking nums[i] and -nums[i] and call
// recursion. At the end of array if sum==S then return 1 otherwise 0.

// As same result is calculated multiple times in recursion we can store the result of <index,sum> state
// in DP vector. Max array size 20 and Max element sum 1000 and Min element sum 1000 which
// makes sum range 0 to 2000. To avoid negative index we add 1000 with sum while storing and
// retriving value in DP vector.
class Solution2 {
public:
    
    // dp vector store precalculated result of <index,sum>
    // max array size 20 and max element sum 1000 and so min element sum 1000
    // makes sum range 0 to  1000+1000 = 2000
    int dp[21][2001];
    
    // recursion from 0 to end of nums array taking +nums[i] and -nums[i] value
    int dfs(int index, vector<int>& nums, int &S, int sum)
    {
        // reached to the end of array 
        // return 1 if S==sum, otherwise return 0
        if(index==nums.size())
            return sum==S?1:0;

        // return precalculted result
        // to avoid negative index we add 1000 with sum
        if(dp[index][sum+1000]!=-1) return dp[index][sum+1000];
        
        int count = 0;
        
        // call recursion for taking both +nums[i] and -nums[i] values
        // and updated running sum as sum+nums[i] and sum-nums[i]
        
        count+= dfs(index+1,nums,S,sum+nums[index]);
        count+= dfs(index+1,nums,S,sum-nums[index]);
        
        return dp[index][sum+1000] = count;
    }
    
    int findTargetSumWays(vector<int>& nums, int S) {
        
        // set -1 to all dp values
        memset(dp,-1,sizeof(dp));
        
        // all possible ways to reach target 
        return dfs(0,nums,S,0);
    }
};


int main(){
    Solution2 ss;
    vector<int> nums = {1, 1, 1, 1, 1};
    int target = 3;
    cout<<ss.findTargetSumWays(nums, target);
    return 0;
}