class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        map<int, int> mp;
        vector<int> ans;
        
         for(char c:nums1)
                mp[c]++;
         for(char c:nums2)
                mp[c]++;
         for(char c:nums3)
                mp[c]++;
        
        // for(int i=0;i<nums1.size();i++)
        //     mp[nums1[i]]++;
        // for(int i=0;i<nums2.size();i++)
            // mp[nums2[i]]++;
        // for(int i=0;i<nums3.size();i++)
            // mp[nums3[i]]++;
        
         for (auto m : mp) {
        if (m.second >= 2)  // unique value is 1 obviously, so if second == 1, then add them
        ans.push_back(m.first);
      
    }
        
        // for(auto n:mp){
        //     if(mp.second>=2)
        //         ans.push_back(mp.first);
        // }
        return ans;
    }
};