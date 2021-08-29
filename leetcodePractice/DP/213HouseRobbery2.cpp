#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/house-robber-ii/
// https://www.youtube.com/watch?v=yYqShJj-ydA -REFERENCE
class Solution {
public:
int solve(vector<int> nums){
            int n=nums.size();
        if(nums.size()==0)
            return 0;
        vector<int> a(n);
        if(n>=1)
            a[0]=nums[0];
        if(n>=2)
            a[1]=max(nums[0], nums[1]);
        for(int i=2;i<n;i++){
            a[i]=max(a[i-1], a[i-2]+nums[i]);
        }
        return a[n-1];
}
    int rob(vector<int>& nums) {
    if(nums.size()==0)
        return 0;
        if(nums.size()==1)
            return nums[0];
        int ans1=solve(vector<int>(nums.begin(), nums.end()-1));
        int ans2=solve(vector<int> (nums.begin()+1, nums.end()));
        return max(ans1, ans2);
    }
};

int main(){
    Solution s;
    vector<int> nums={1,2,3,1};
    cout<<s.rob(nums)<<endl;
}