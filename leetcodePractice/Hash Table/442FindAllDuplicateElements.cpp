#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/find-all-duplicates-in-an-array/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       
        //Brute force - TLE
        //Time: O(N*N)
        //Space: O(1)
        vector<int>ans;
        if(nums.empty())
            return ans;
        
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                
                if(nums[i]!=nums[j])
                    continue;
                else{
                    ans.push_back(nums[i]);
                    break;
                }
            }
        }
        return ans;
    }

    vector<int> HashingFindDuplicates(vector<int>& nums) {
        //Hashing
        //Time - O(N)
        //Space - O(N)
        vector<int>ans;
        if(nums.empty())
            return ans;
        
        unordered_map<int,int> mp;
        for(int i:nums)
            mp[i]++;
        
        for(auto i:mp)
            if(i.second == 2)
                ans.push_back(i.first);
        
        return ans;
    }
  
    vector<int> SortingfindDuplicates(vector<int>& nums) {        
        //Sorting
        // Time - O(N*Log N)
        // Space - O(1)
        vector<int> ans;
        sort(nums.begin(), nums.end());
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] == nums[i])
                ans.push_back(nums[i]);
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    vector<int> ans = s.findDuplicates(nums);
    // vector<int> ans = s.HashingFindDuplicates(nums);
    // vector<int> ans = s.SortingfindDuplicates(nums);
    for(int i = 0; i < size(ans); i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}