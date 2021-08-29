#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
     sort(nums.begin(), nums.end());
        int i,ans= nums[k-1] - nums[0];
        for(i=k;i<nums.size();i++)
            ans = min(ans, nums[i]-nums[i-k+1]);
        
        return ans;
    }
};

/*
The logic is that after sorting the array in ascending order it will be divided into n windows of k sizes

Eg :- [9,4,1,7]
Sort :- [1,4,7,9]

Now the question simply becomes find the minimum difference between lowest and highest element of window of size k Windows :- [1,4] [4,7] [7,9]
Answer = min((4-1),(7-4),(9-7))

2nd EXPLANATION:

Sort the array.
Then, we use a window of size k and calculate the difference between the first and last element in the window.
res will be the minimum of these values.

Time Complexity: O(nlogn)
Space Complexity: O(1)

*/

int main()
{
    Solution s;
    vector<int> nums = {9,4,1,7};
    int k = 2;
    cout<<s.minimumDifference(nums,k);
    return 0;
}