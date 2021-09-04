#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/arithmetic-slices/
// https://leetcode.com/problems/arithmetic-slices/discuss/1071335/C%2B%2B-or-Math-or-O(n)-0ms-Beats-100-or-No-Extra-Space-or-Explanation
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3)
            return 0; // stated in question
        int i,ans=0, current=0, lastDiff=nums[1]-nums[0];
        
        for(i=1;i<n-1;i++){
            int currDiff=nums[i+1] -nums[i];
            
            if(currDiff==lastDiff)
                current++;
            
            else {
                lastDiff=currDiff;
                current=0;
            }
            ans+=current;
        }
        return ans;
    }
};
int main() {
    Solution sol;
    vector<int> nums;
    nums={2,4,6,8,10};
    cout<<sol.numberOfArithmeticSlices(nums);
}