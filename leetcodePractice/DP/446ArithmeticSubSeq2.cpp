#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/arithmetic-slices-ii-subsequence/
// https://leetcode.com/problems/arithmetic-slices-ii-subsequence/discuss/1036156/C%2B%2B-DP-solution-using-unordered_map

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if(n==0)return 0;
        //MAKE AN ARRAY OF MAPS
        unordered_map<int,int>maps[n];
        int ans = 0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                //FIND COMMON DIFFERENCE FOR THIS PAIR
                long cd = (long)nums[i]-(long)nums[j];
                //IF OUT OF INTEGER RANGE , AP OF LEN 3 NOT POSSIBLE
                if(cd<INT_MIN || cd>INT_MAX)
                    continue;
                //AP ENDING AT POINT J WITH COMMON DIFFERENCE CD
                int apj = maps[j][cd];
                //AP ENDING AT POINT I WITH COMMON DIFFERENCE CD
                int api = maps[i][cd];
                //AP FOUND, ADD AP ENDING WITH J(LEN>=3) TO ANS 
                ans+=apj;
                //PUT A PAIR(LEN 2) WITH COMMON DIFFERENCE IN MAP
                maps[i][(int)cd] = api+apj+1;
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums{2,4,6,8,10};
    cout<<s.numberOfArithmeticSlices(nums);
    return 0;
}