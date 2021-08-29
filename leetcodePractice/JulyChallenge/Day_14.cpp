class Solution {
 public:
  string customSortString(string order, string str) {
    int count[128] = {};

    for (char c : str)
      ++count[c];

    string ans = str;
    int i = 0;

    for (char c : order) {
      while (count[c] > 0) {
        ans[i++] = c;
        count[c]--;
      }
    }

    for (char c = 'a'; c <= 'z'; c++) {
      while (count[c] > 0) {
        ans[i++] = c;
        count[c]--;
      }
    }
    return ans;
  }
};

/*
cnt[c] is the number of occurencies of character c in string str.

Firstly, we prioritize to traverse characters c in order, so that we can keep
the order of str same with the order of order: 
If cnt[c] > 0 -> We append character c to the answer cnt[c] times.
 Finally, we traverse characters c from a to z to add remain characters which may not appear in orders:
 If cnt[c] > 0 -> We append character c to the answer cnt[c] times.
*/