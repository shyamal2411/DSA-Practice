class Solution {
 public:
  vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int> v;
    unordered_map<int, int> um;

    for (auto num : nums1)
      um[num]++;  // add  all the numbers in unordered map

    for (auto num : nums2) {
      if (um[num] > 0) {
        v.push_back(num);
        um[num]--;
      }
    }
    return v;
  }
};