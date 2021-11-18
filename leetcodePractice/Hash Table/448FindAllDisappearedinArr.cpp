#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
class Solution {
public:
// https://youtu.be/xTbj76XN-5U
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0;i<nums.size(); i++)
            if(nums[abs(nums[i])-1] > 0)
                nums[abs(nums[i])-1] *=-1;
    
        for(int i = 0;i<nums.size(); i++)
            if(nums[i] > 0)
                ans.push_back(i+1);
        
        return ans;
    }

     vector<int> findDisappearedNumbers2(vector<int>& nums) {
        sort(begin(nums), end(nums));
        vector<int> ans;
        for(int i = 1; i <= size(nums); i++) 
            if(!binary_search(begin(nums), end(nums), i))   // binary search in nums for each i
                ans.push_back(i);
        return ans;
    }

     vector<int> findDisappearedNumbers3(vector<int>& nums) {
          unordered_set<int> s(begin(nums), end(nums)); // insert every nums[i] in hashset
        vector<int> ans(size(nums) - size(s));
        for(int i = 1, j = 0; i <= size(nums); i++)  
            if(!s.count(i)) ans[j++] = i; // add all elements not found in hashset to ans
        return ans;
    }

     vector<int> findDisappearedNumbers4(vector<int>& nums) {
          vector<bool> seen(size(nums)+1);
        vector<int> ans;
        for(auto c : nums) 
            seen[c] = true;
        for(int i = 1; i <= size(nums); i++)
            if(!seen[i]) ans.push_back(i);
        return ans;
    }
};

// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/discuss/1583736/C%2B%2BPython-All-6-Solutions-w-Explanations-or-Binary-Search%2B-Hashset-%2B-2x-O(1)-Space-Approach

int main(){
    Solution s;
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> ans = s.findDisappearedNumbers(nums);
    for(int i : ans) cout<<i<<" ";
    cout<<endl;
    return 0;
}