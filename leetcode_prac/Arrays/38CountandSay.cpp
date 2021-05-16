class Solution {
 public:
  string countAndSay(int n) {
    if (0 == n)
      return "";
    if (1 == n)
      return "1";

    string ans = "1";
    string s;

    for (int i = 1; i < n; i++) {  // run from starting to generate second string

      int l = ans.size();
      // cheack all digits in the string
      for (int j = 0; j < l; j++) {
        int count = 1;  // we have at least 1 occourence of each digit
        // get the number of times same digit occurred
        while ((j + 1 < l) && (ans[j] == ans[j + 1])) {
          count++;
          j++;  // we need to keep increasing the index inside of the string
        }

        // add to new string "count"+"digit itself"
        s += to_string(count) + ans[j];
      }

      ans = s;
      s.clear();
    }

    return ans;
  }
};