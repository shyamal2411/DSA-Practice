/* https://leetcode.com/explore/featured/card/fun-with-arrays/526/deleting-items-from-an-array/3247/
 */
class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {
    int max = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != val) {
        nums[max] = nums[i];
        max++;
      }
    }
    return max;
  }
};