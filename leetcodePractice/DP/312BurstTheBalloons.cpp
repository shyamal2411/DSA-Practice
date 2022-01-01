#include<bits/stdc++.h> 
using namespace std;

//  https://leetcode.com/problems/burst-balloons/discuss/76230/C%2B%2B-dp-detailed-explanation
//  https://leetcode.com/problems/burst-balloons/
class Solution {
public:
    int maxCoins(vector<int>& nums) {
       int n = nums.size();
        nums.insert(nums.begin(), 1);
        nums.push_back(1);
        vector<vector<int>> dp(nums.size(), vector<int>(nums.size(), 0));
        for (int len = 1; len <= n; ++len)
            for (int left = 1; left <= n - len + 1; ++left) {
                int right = left + len - 1;
                for (int k = left; k <= right; ++k)
                    dp[left][right] = max(dp[left][right], nums[left-1]*nums[k]*nums[right+1] + dp[left][k-1] + dp[k+1][right]);
            }
        return dp[1][n];  
    }
};

int main(){
    Solution ss;
    vector<int> nums = {3,1,5,8};
    cout<<ss.maxCoins(nums)<<endl;
    return 0;
}
/*
the visualization help me to understand hope it can help you too.

1···················1

add two 1 at beginning and end of nums, each · represent each number in nums.

len is the subinterval length, it grows from 1 to full length of orignal nums string.

the following illustrations demonstrate how the subinterval shift from left to right. (len = 7 in the illustration)

for each len, when shifted to rightmost, increase len and do the shift again. this way we can evaluate all possible subintervals.

for each subinterval, in the innermost for loop, find which balloon to burst LAST that will give us the most coins for that subinterval. <- IMPORTANT TO UNDERSTAND THIS

dp[left][right] is the maximum coins we can get from left to right. note when left > right, it is 0

   1···················1    (len = 7)
    |     |
  left  right
  
   1···················1
           |     |
         left  right
          
   1···················1
                |     |
              left  right
for the example [3, 1, 5, 8], the dp matrix is updated like this

0    0    0    0    0    0
0    3    0    0    0    0
0    0    15   0    0    0
0    0    0    40   0    0
0    0    0    0    40   0
0    0    0    0    0    0
then

0    0    0    0    0    0
0    3    30   0    0    0
0    0    15   135  0    0
0    0    0    40   48   0
0    0    0    0    40   0
0    0    0    0    0    0
at last

0    0    0    0    0    0
0    3    30   159  167  0
0    0    15   135  159  0
0    0    0    40   48   0
0    0    0    0    40   0
0    0    0    0    0    0

*/