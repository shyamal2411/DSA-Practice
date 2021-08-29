/* https://leetcode.com/explore/learn/card/fun-with-arrays/525/inserting-items-into-an-array/3245/
 */

class Solution {
 public:
  void duplicateZeros(vector<int>& arr) {
    int i, j, n = arr.size();
    for (i = 0; i < n; i++) {
      if (arr[i] == 0) {
        arr.insert(arr.begin() + i, 0);
        arr.pop_back();
        i++;
      }
    }
    return;
  }
};