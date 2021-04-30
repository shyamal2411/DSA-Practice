class Solution {
 public:
  int uniqueMorseRepresentations(vector<string>& words) {
    vector<string> vec = {".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",
                          "....", "..",   ".---", "-.-",  ".-..", "--",   "-.",
                          "---",  ".--.", "--.-", ".-.",  "...",  "-",    "..-",
                          "...-", ".--",  "-..-", "-.--", "--.."};
    // take the given string as vector.
    unordered_set<string> a;

    for (auto w : words) {
      string code;
      for (auto itr : w)
        code +=
            vec[itr -
                'a'];  // iterate through the vec and repective character of w

      a.insert(code);  // insert it into the set
    }
    return a.size();  // return the transformations.
  }
};