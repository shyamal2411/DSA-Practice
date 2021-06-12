// https:// leetcode.com/contest/biweekly-contest-54/problems/check-if-all-the-integers-in-a-range-are-covered/
class Solution {
 public:
  bool isCovered(vector<vector<int>>& ranges, int left, int right) {
    // sort(ranges.begin(),ranges.end());

    set<int> s;
    // int count=0;
    for (auto itr : ranges) {
      int leftt = *itr.begin();
      int rightt = *itr.rbegin();  // from reverse

      for (int i = leftt; i <= rightt; i++) {
        if (i >= left && i <= right) {
          s.insert(i);
        }
      }
    }

    // for(int i=left;i<=right;i++)
    // {
    //     if(s[i]==ranges[i])
    //         count++;
    // }
    if (s.size() == (right - left + 1))
      return true;
    else
      return false;
  }
};