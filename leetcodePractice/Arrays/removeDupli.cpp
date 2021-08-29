class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0)
      return 0;  // corner case

    int i = 0;

    for (int j = 1; j < nums.size(); j++) {
      if (nums[j] != nums[i])  // if element isn't duplicating with previous one
                               // then increment i
      {
        i++;
        nums[i] = nums[j];  // initialize value of element at j with i
      }
    }
    return i + 1;  // this length is the actual length of sorted & not duplicate
  }
};