#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/contiguous-array/
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       map<int, int> mp;
        mp[0] = -1;
        int i, maxLen = 0, count = 0;
        for(i = 0; i < nums.size(); i++){
            count+=(nums[i] == 1 ? 1 : -1);
            if(mp.find(count)!= mp.end())
                maxLen = max(maxLen, i - mp[count]);
            else
                mp[count] = i;
        }
        return maxLen;
    }
};

/*
1.Make a count variable (x in below code) to count number of 0 and 
2.Traverse the vector and if element is 0 then decrement this x, else increment this.
3.Now check this value of x in a map showing whether we have achieved this value before or its the first time.
4.If we have achieved this condition before (Let's say at index j we have same value x as we have now at this current index), this means subarray from j to current index has equal number of 0s and 1s.
5.Now update the value of maxLen.
6.If you didn't understood above solution then dry run any case on below code.
*/

int main(){
    Solution s;
    vector<int> nums = {0,1,0,1,1};
    cout<<s.findMaxLength(nums);
    return 0;
}