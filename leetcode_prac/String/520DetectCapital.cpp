class Solution {
 public:
  // util functions avoiding redundancy
  bool isLower(char s) { return s >= 'a' && s <= 'z'; }
  bool isUpper(char s) { return s >= 'A' && s <= 'Z'; }

  // main function
  bool checkutil(string word) {
    int n = word.size();
    int i;
    // if first letter is capital followed by small letters
    if (isLower(word[0])) {
      i = 1;
      while (word[i] && isLower(word[i]))
        i++;

      return i == n ? true : false;
      /*
      if(i==n) return true;
      else return false;
      */
    }

    else {
      i = 1;
      while (word[i] &&
             isUpper(word[i]))  // if starting & rest letters are capital
        i++;

      if (i == n)
        return true;
      else if (i > 1)
        return false;

      while (word[i] && isLower(word[i]))
        i++;

      return i == n ? true : false;
      /*
    if(i==n) return true;
    else return false;
    */
    }
  }

  bool detectCapitalUse(string word) {
    bool check = checkutil(word);

    return check == true;
    // if (check)
    //   return true;
    // else
    //   return false;
  }
};