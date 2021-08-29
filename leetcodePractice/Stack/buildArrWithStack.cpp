class Solution {
 public:
  vector<string> buildArray(vector<int>& target, int n) {
    vector<string> result;
    int i = 1, j = 0;
    while (i <= n) {
      if (j == target.size())
        break;
      if (i == target[j]) {
        r.push_back("Push");
        i++;
        j++;
      } else {
        r.push_back("Push");
        r.push_back("Pop");
        i++;
      }
    }
    return r;
  }
};