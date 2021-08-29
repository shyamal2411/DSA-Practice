class Solution {
 public:
  const int val[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  const string roman[13] = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                            "XL", "X",  "IX", "V",  "IV", "I"};

  string intToRoman(int num) {
    string ans = "";

    // new method of for loop
    for (int i = 0; num != 0; i++)
      while (num >= val[i])
        ans += roman[i], num -= val[i];
    // to avoid brackets, we used comma to differentiate.
    return ans;
  }
};