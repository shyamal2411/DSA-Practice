#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/contest/weekly-contest-257/problems/count-special-quadruplets/
class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
    
        for(int i = 0;i < n;i++){
            for(int j = i + 1;j < n;j++){
                for(int k = j + 1;k < n;k++){
                    for(int t = k + 1;t < n;t++){
                        if(nums[i] + nums[j] + nums[k] == nums[t])
                            ans++;
                    }
                }
            }
        }
        return ans;

    }
};

int main(){
    Solution s;
    vector<int> nums = {1,2,2,4};
    cout<<s.countQuadruplets(nums);
    return 0;
}