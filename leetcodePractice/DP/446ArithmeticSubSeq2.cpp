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

//The above solution gives TLE for new test cases.
class Solutionn {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector< unordered_map<long, long> > dp(nums.size());
        int res = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < i; j++) {
                long diff = (long)nums[i] - (long)nums[j];
                
                dp[i][diff]++;
                
                if (dp[j].find(diff) != dp[j].end()) {
                    dp[i][diff] += dp[j][diff];
                    res += dp[j][diff];
                }
            }
        }
        
        return res;
    }
};


int main()
{
    Solutionn s;
    vector<int> nums{2,4,6,8,10};
    cout<<s.numberOfArithmeticSlices(nums);
    return 0;
}