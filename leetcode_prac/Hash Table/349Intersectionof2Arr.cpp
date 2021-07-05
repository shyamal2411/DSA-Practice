class Solution {
public:
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1 (nums1.begin(), nums1.end());
        set<int> s2 (nums2.begin(), nums2.end());    
        vector <int> s;
        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(s));
        return s;
    }
}; //Stack overflow ¯\_(ツ)_/¯

class Solution {
 public:
  vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> mp1, mp2;

    for (auto itr : nums1)
      mp1[itr]++;

    vector<int> ans;
    for (int i = 0; i < nums2.size(); i++) {
      if (mp1.find(nums2[i]) != mp1.end() && mp2.find(nums2[i]) == mp2.end()) {
        ans.push_back(nums2[i]);
        mp2[nums2[i]]++;
      }
    }
    return ans;
  }
};