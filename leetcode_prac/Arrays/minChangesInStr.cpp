class Solution {
 public:
  int minOperations(string s) {
    int countzero = 0, countone = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '1')
        countone++;

      if (s[i] == '0')
        countzero++;
    }
    return abs(countzero - countone);
  }
};