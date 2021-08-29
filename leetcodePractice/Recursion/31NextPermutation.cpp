#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/next-permutation/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    next_permutation(nums.begin(), nums.end());        
    }
};

int main()
{
    Solution s;
    vector<int> nums{1,2,3};
    s.nextPermutation(nums);
    for(int i = 0; i < nums.size(); i++)
        cout<<nums[i]<<" ";
    cout<<endl;
    return 0;
}