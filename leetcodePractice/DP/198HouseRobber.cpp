#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/house-robber/
// https://leetcode.com/problems/house-robber/discuss/846111/C%2B%2B-Four-Simple-Approch
class Solution {
public:
    int rob(vector<int>& nums) {
        int i,n=nums.size(), sum1=0, sum2=0;

        for(i=0;i<n;i++){
            
            if(i%2==0)
                sum1=max(sum1+nums[i],sum2);
            else
                sum2=max(sum2+nums[i],sum1);
        }
        return max(sum1, sum2);
    }
};
// Time: O(n)
// Space: O(1)

int main(){
    Solution s;
    // vector<int> nums{2,7,9,3,1};
    vector<int> nums{1,2,3,1};
    cout<<s.rob(nums)<<endl;
    return 0;
}