#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/array-nesting/
class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int ans=0, n=nums.size();
        vector<bool> seen(n);
        for(int i:nums)
        {
            int count=0;
            while(!seen[i]){
                seen[i]= true;
                count++;
                i=nums[i];
            }
            ans=max(ans, count);
        }
        return ans;
    }
};
/*
For each element i in A,
repetly find A[i] until a visited element.
Update res to the length of the path.


Complexity:
Each element will be visited once,
Time O(N)
Space O(N) (space can be O(1))

*/

int main()
{
    vector<int> nums{5,4,0,3,1,6,2};
    Solution s;
    cout<<s.arrayNesting(nums)<<endl;
    return 0;
}