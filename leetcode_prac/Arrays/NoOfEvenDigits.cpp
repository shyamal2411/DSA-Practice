/* https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3237/ */
class Solution {
 public:
  int findNumbers(vector<int>& nums) {
    int count = 0, flag = 0;
    for (int i = 0; i < nums.size(); i++) {
      count = 0;
      while (nums[i] != 0) {
        nums[i] /= 10;
        count++;
      }
      if (count % 2 == 0) {
        flag++;
      }
    }
    return flag;
  }
};
