#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/longest-consecutive-sequence/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
            if(nums.size()==0)
                return 0;
        int ans = 0, count = 0, n=nums.size();
        sort(nums.begin(), nums.end());
        vector<int> v;
        v.push_back(nums[0]);
        // cout<<n<<endl;
        for (int i = 1; i < n; i++) {
          if (nums[i] != nums[i - 1])
            v.push_back(nums[i]);
            // cout<<nums[i]<<" ";
        }

    for (int i = 0; i < v.size(); i++) {
      if (i > 0 && v[i] == v[i - 1] + 1)
        count++;
      else
        count = 1; //size of longest sequence would always be aleast 1
            //because one element is itself a sequence
      ans = max(ans, count);
    }
    return ans;
    }
};


int main(){
  // vector<int> nums={100,4,200,1,3,2};
  vector<int> nums={0,3,7,2,5,8,4,6,0,1};
  Solution ss;
  cout<<ss.longestConsecutive(nums)<<endl;

  return 0;
}