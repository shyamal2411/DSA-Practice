#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/detect-capital/
// https://leetcode.com/problems/detect-capital/discuss/767479/C%2B%2B-Expressive-Modern-C%2B%2B-or-O(n)-or-2-lines-or-No-loops-just-English-less-bugs
class Solutionn{
  public:
bool detectCapitalUse(string word) {
    for(int i = 1; i < word.size(); i++){
        if(isupper(word[1]) != isupper(word[i]) || 
           islower(word[0]) && isupper(word[i])) return false;
    }        
    return true;
}
};

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


int main(){
    Solution ss;
    string word="USA";
    cout<<ss.detectCapitalUse(word);
    return 0;
}