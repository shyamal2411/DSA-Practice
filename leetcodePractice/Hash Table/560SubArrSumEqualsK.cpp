#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n=nums.size();
        if(n==0)
            return 0;
        
        unordered_map<int, int> mp; //Key = Prefix sum, 
                // Value = Count of Prefix sum.
        int currSum = 0;
        int i=0;
        int count = 0;
        
        while(i<n){
            currSum += nums[i];
            
            if(currSum == k)
                count += 1;
            
            if(mp.find(currSum-k) != mp.end())
                count += mp[currSum - k];
            
            mp[currSum] += 1;
            i += 1;
        }
        return count;
    }
};

int main(){

    Solution ss;
        vector<int> nums = {1,1,1};
    int k = 2;
    cout<<ss.subarraySum(nums, k);
    return 0;
}
