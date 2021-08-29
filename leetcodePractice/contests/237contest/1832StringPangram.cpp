class Solution {
 public:
  bool checkIfPangram(string sentence) {
    unordered_set<char> str;
    for (auto i : sentence)
      str.insert(i);

    if (str.size() >= 26)
      return true;

    else
      return false;
  }
};