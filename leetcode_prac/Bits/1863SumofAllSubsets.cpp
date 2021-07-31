#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int ans;
    int subsetXORSum(vector<int>& nums) {
        ans=0;
        dfs(nums, 0, 0);
        return ans;
    }
    
    void dfs(vector<int>& nums, int pos, int cur){
        if(pos==nums.size()){
            ans+=cur;
            return;
        }
        
        dfs(nums,pos+1, cur);
        dfs(nums, pos+1, cur^nums[pos]);
    }
};

int main(){
    // vector<int> nums={5,1,6};
    // vector<int> nums={1,3};
    vector<int> nums={3,4,5,6,7,8};
    Solution obj;
    cout<<obj.subsetXORSum(nums);
    return 0;
}