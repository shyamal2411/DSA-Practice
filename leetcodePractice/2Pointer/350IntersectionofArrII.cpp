class Solution {
 public:
  vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    int point = 0, points = 0;
    vector<int> ans;  // as function is of vector.

    while (point < nums1.size() && points < nums2.size()) {
      if (nums2[points] == nums1[point]) {
        ans.push_back(nums2[points]);
        points++;
        point++;
      } else if (nums2[points] < nums1[point]) {
        points++;
      } else if (nums2[points] > nums1[point]) {
        point++;
      }
    }
    return ans;
  }
};