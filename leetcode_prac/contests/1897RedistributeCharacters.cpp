/*
https://leetcode.com/contest/weekly-contest-245/problems/redistribute-characters-to-make-all-strings-equal/
*/

class Solution {
 public:
  bool makeEqual(vector<string>& words) {
    map<char, int> freq;
    for (auto child : words)
      for (auto c : child)
        freq[c]++;

    int n = words.size();
    for (auto child : freq) {
      if (child.second % n != 0)
        return false;
    }
    return true;
  }
};