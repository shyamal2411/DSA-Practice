class Solution {
 public:
  string mostCommonWord(string paragraph, vector<string>& banned) {
    string ans;
    unordered_map<string, int> count;

    // first remove punctuations and change it to lower case
    for (auto& c : paragraph)
      c = isalpha(c) ? tolower(c) : ' ';

    // count the frequency of every word
    istringstream iss(paragraph);
    string Lword;
    while (iss >> Lword)
      count[Lword]++;

    // set freq of banned word to 0
    for (auto b : banned)
      count[b] = 0;

    // get word with high freq
    int maxCount = 0;

    for (auto c : count) {
      if (c.second > maxCount) {
        maxCount = c.second;
        ans = c.first;
      }
    }
    return ans;
  }
};