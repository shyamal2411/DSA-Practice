class Solution {
 public:
  int util(string str) {
    int val = 0;
    for (int i = 0; i < str.size(); i++) {
      val = val * 10 + (str[i] - 'a');
    }
    return val;
  }

  bool isSumEqual(string firstWord, string secondWord, string targetWord) {
    int first, second, third;
    first = util(firstWord);
    second = util(secondWord);
    third = util(targetWord);

    return first + second == third;
  }
};