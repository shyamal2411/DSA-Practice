#include<bits/stdc++.h> 
using namespace std;

#include<bits/stdc++.h>

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            auto it= lower_bound(ans.begin(), ans.end(), nums[i]);
            
            if(it==ans.end())
                ans.push_back(nums[i]);
            else *it=nums[i];
        }
        return ans.size();
    }
};

// https://www.geeksforgeeks.org/longest-monotonically-increasing-subsequence-size-n-log-n/

int main() {
    Solution s;
    vector<int> nums{10,9,2,5,3,7,101,18};
    cout<<s.lengthOfLIS(nums);
    return 0;
}