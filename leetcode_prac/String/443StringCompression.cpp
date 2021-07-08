class Solution {
 public:
  int compress(vector<char>& chars) {
    if (chars.size() < 2)
      return chars.size();

    int i = 0, j = 0;
   
    while (i < chars.size()) {
      chars[j] = chars[i];

      int count = 0; //initially set it to 0
   
   //to check and count the chars
      while (i < chars.size() && chars[i] == chars[j]) {
        count++;
        i++;
      }
      // When the count of that character is 1 we shouldn't do anything. We just
      // move to the next character i.e j++.
      if (count == 1) {
        j++;
      } else {
        string s = to_string(count);

        for (auto ch : s) {
          chars[++j] = ch;
        }
        j++;
      }
    }
    return j;
  }
};