class Solution {
 public:
  bool uniqueOccurrences(vector<int>& arr) {
    map<int, int> mp, m;
    for (auto i : arr)
      mp[i]++;

    for (auto i : mp)
      m[i.second]++;

    for (auto i : m) {
      if (i.second > 1)
        return false;
    }
    return true;
  }
};
/*Take 2 maps, mp is used for adding all elements of vector arr. after that
 * store the number of occurences i.e. i.second in map m, then check if the
 * value of any i.second >1 or not. If yes then false, else true.*/