#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/contest/leetcode-weekly-contest-4/problems/rotate-function/
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        int sum = 0, ans = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            ans += i * nums[i];
        }
        int index = n-1;
        int res = ans;
        for(int k = 1; k < n; k++){
            ans = ans - ((n-1) * nums[index]) + (sum - nums[index]);
            res = max(res, ans);
            index--;
        }
        return res;
    }
};

/*
Let a=[4,3,2,6].
At k=0(no rotation) -> I precomputed its answer and it comes out to be 25. Also i precomputed the sum of the array. 04 + 13 + 22 + 36 = 25
At k=1(rotated by 1 unit clockwise). Now our array becomes(just imagine) a=[6,4,3,2]. 
Now if we closely look, we can see the last element i.e. would now contribute 0 to our answer unlike earlier it contributed (n-1) times. 
So for this rotation we have to subtract that and we have to add contribution of all the other elements as we can see, 
now all the other elements contribute 1 time extra prior to the prev ans. i.e. 06 + 14 + 23 + 32 = 16
Now we can make a formula out of it F(1) = F(0) - ((n-1)*(a[index])) + (sum - a[index]) where index=n-1.
We now decrement index by 1. It is very crucial because we are not actually rotating our array 
and so when we now rotate the original array by 2 or prev array by 1 clockwise we will get [2,6,4,3] 
and now 2 needs to be subtracted (n-1) times from prev answer and other elements need to be added as in the 
original array [4 3 2 6] 2 comes at 2 position which we will get only if we do index--

*/

int main(){
    Solution s;
    vector<int> nums = {4,3,2,6};
    cout<<s.maxRotateFunction(nums)<<endl;
    return 0;
}