// https://leetcode.com/contest/weekly-contest-242/problems/longer-contiguous-segments-of-ones-than-zeros/
class Solution {
 public:
  bool checkZeroOnes(string s) {
    int max1 = 0, max0 = 0, one = 0, zero = 0, n = s.length();
    for (int i = 0; i < n; i++) {
      if (s[i] == '1')
        one++, zero = 0;  // if 1 then chain is forming, count it
      else
        zero++, one = 0;

      max1 = max(max1, one);  // finding max of zeros and ones
      max0 = max(max0, zero);
    }
    return max1 > max0;
  }
};