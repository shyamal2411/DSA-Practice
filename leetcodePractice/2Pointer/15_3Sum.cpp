#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/3sum/
class Solution {
public:
    // we will apply three check for finding all unique triplets!
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        // check-1 -----> for removing all duplicates
        sort(nums.begin(), nums.end());
        vector<vector<int> > ans;
        for(int i=0;i<nums.size();i++){
            
            // check-2 -----> for removing all duplicates
            if(i>0 && nums[i-1] == nums[i])
                continue;
            
            int l = i+1;
            int r = nums.size()-1;
            while(l < r){
                if(nums[l] + nums[r] +nums[i] == 0 ){
                    ans.push_back({nums[l],nums[r],nums[i]});
                    l++;
                    r--;
                    
                    
                    // check-3 -----> for removing all duplicates
                    while(l < r && nums[l] == nums[l-1] && nums[r] == nums[r+1]){
                        l++;
                        r--;
                    }
                
                }
                else if(nums[l] + nums[r] + nums[i] < 0){
                    l++;
                }
                else
                    r--;
            }
        }
        return ans;
    }
};
// https://leetcode.com/problems/3sum/discuss/1519201/Simple-Intitutive-Solution-oror-Two-Pointer-oror-C%2B%2B

int main(){
    Solution s;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = s.threeSum(nums);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}