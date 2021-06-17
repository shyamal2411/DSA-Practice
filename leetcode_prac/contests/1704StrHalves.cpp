class Solution {
 public:
  bool halvesAreAlike(string s) {
    int i, j, l = 0, r = 0;

    for (i = 0; i < s.size() / 2; ++i) {
      for (j = s.size() - 1; j > 0; j--) {
        l += checkvowel(islower(s[i]));
        r += checkvowel(islower(s[j]));
      }
    }
    return l == r;
  }
  // primary function to check if letter is vowel or not
  bool checkvowel(char s) {
    return s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u';
  }
};

class Solution {
 public:
  bool halvesAreAlike(string s) {
    int l = 0, r = 0;

    for (int i = 0, j = s.size() - 1; i < s.size() / 2; ++i, --j) {
      l += isVowel(tolower(s[i]));
      r += isVowel(tolower(s[j]));
    }
    return l == r;
  }

  bool isVowel(char s) {
    return s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u';
  }
};

class Solution {
 public:
  bool halvesAreAlike(string s) {
    int t = 0;
    for (int i = 0; i < s.size(); i++) {
      s[i] = tolower(s[i]);
      if (i < s.size() / 2) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
            s[i] == 'u')
          t++;
      } else {
        // if we don't write this if statement, then it would get rejected
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
            s[i] == 'u')
          t--;
      }
    }
    // if(t==0)
    //    return true;
    // else
    //     return false;
    return t == 0;
  }
};