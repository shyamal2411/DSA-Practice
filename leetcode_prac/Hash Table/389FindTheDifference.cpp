class Solution {
 public:
  char findTheDifference(string s, string t) {
    unordered_map<char, int> sh, th;
    // take 2 maps and insert the characters of s in sh
    char result = ' ';  // function type is char, so for returning char

    for (char ch : s)
      sh[ch]++;  // inserting all the characters of s into map-sh

    for (char ch : t) {
      th[ch]++;  // insert characters & check if the char value of th more than
                 // sh i.e. check if the char is out of s string's out of the
                 // area or not
      if (th[ch] > sh[ch]) {
        result = ch;  // if it is then assign it to result char & break
        break;
      }
    }
    return result;
  }
};