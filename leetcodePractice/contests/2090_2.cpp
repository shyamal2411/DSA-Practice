#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/k-radius-subarray-averages/
class Solution
{
public:
    vector<int> getAverages(vector<int> &nums, int k)
    {
        long n = nums.size(), len = 2 * k + 1, sum = 0; // len=window (i-k on left, i+k on right of the index)
        vector<int> ans(n, -1);
        if (n < len)
            return ans; // if size of nums is less than window-k, return as -1
        for (int i = 0; i < n; ++i)
        {
            sum += nums[i]; // prefix sum
            if (i - len >= 0)
                sum -= nums[i - len]; // pop A[i-len], if any, out of window
            if (i >= len - 1)
                ans[i - k] = sum / len; // the center of this window is at `i-k`
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,2,3,4,5,6,7,8};
    int k = 3;
    vector<int> ans = s.getAverages(nums, k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}