class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
 
        int sum=0; // whole sum
        unordered_map<int,int> mp; // for prefix sum
        int count = 0; // total subarrays found
        mp[0]++; // to take into account those subarrays that begin with index 0
        
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
           
            if (mp.find(sum-k) != mp.end())
            count += mp[sum-k];
            mp[sum]++;
        }
        return count;
    }
};