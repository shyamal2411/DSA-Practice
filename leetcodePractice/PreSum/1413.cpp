#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0, minn=0;
        
        for(int n:nums){
            sum+=n;
            minn=min(minn, sum);
        }
        return 1-minn;
    }
};
/*
if all the inputs are positive then min answer should be one
incase of -ve inputs then answer should be the negation of min sum + 1
[-3,2,-3,4,2]-> answer is 5
how ?
-3 + 2 + -3 gives answer -4
what if we added 4 to it
then the step by step sum would be 0 at some point
but what we require here is that step by step sum is never less than 1.

so answer would be -4*-1 + 1 .. here we iterate any longer also the sum would always become more positive here on
*/

int main()
{
    vector<int> nums{-3,2,-3,4,2};
    Solution s;
    cout<<s.minStartValue(nums)<<endl;
    return 0;
}