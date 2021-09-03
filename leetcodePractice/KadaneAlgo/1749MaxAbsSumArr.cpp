#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/
class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int i,max1=0, max2=0, sum1=0, sum2=0;
        for(i=0;i<nums.size();i++){
            //Find the max sum
            sum1+=nums[i];
            if(sum1<0)
                sum1=0;
            
            max1=max(sum1, max1);
            //Find the min sum
            sum2+=nums[i];
            if(sum2>=0)
                sum2=0;
            max2=min(sum2, max2);
        }
        return max(max1, abs(max2));
    }
/*2nd Approach :
        Apply Kadane's Algorithm to find Maximum Sum Subarray (i.e maxm_sum) and Minimum Sum Subarray (i.e minm_sum)
        Solution : return max( abs(maxm_sum) , abs(minm_sum ));
*/
    int maxAbsoluteSum2(vector<int>& nums) {
        int maxSum=INT_MIN, max_ending_here=0;
        int min_ending_here=0, minSum=INT_MAX;
        int i,n=nums.size();
        
        for(i=0;i<n;i++){
            max_ending_here+=nums[i];
            maxSum = max(maxSum, max_ending_here);
            if(max_ending_here < 0)
                max_ending_here = 0;
            
            min_ending_here+=nums[i];
            minSum = min(minSum, min_ending_here);
            if(min_ending_here > 0)
                min_ending_here = 0;
        }
        return max(abs(maxSum), abs(minSum));
    }

    //Approach 3 :
     int maxAbsoluteSum3(vector<int>& nums) {
        int ans=0, maxSum=0, minSum=0;
        
        for(auto n:nums){
            maxSum = max(0, n+ maxSum);
            minSum = min(0, n+ minSum);
            ans = max({ans, maxSum, -minSum});
        }
        return ans;
    }

    //Approach 4 :
    int maxAbsoluteSum4(vector<int>& nums) {
        partial_sum(begin(nums), end(nums), begin(nums));
        
        return max(0, *max_element(begin(nums), end(nums))) - min(0, *min_element(begin(nums), end(nums)));
    }
};

int main(){
    Solution s;
    // vector<int> nums{1,-2,3,10,-4,7,2,-5};
    // vector<int> nums{1,-3,2,3,-4};
    vector<int> nums{2,-5,1,-4,3,-2};
    cout<<s.maxAbsoluteSum4(nums);
}