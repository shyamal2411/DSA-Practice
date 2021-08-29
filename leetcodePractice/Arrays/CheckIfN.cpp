/* https://leetcode.com/explore/learn/card/fun-with-arrays/527/searching-for-items-in-an-array/3250/
 */

class Solution {
 public:
  bool checkIfExist(vector<int>& arr) {
    int i, j, n = arr.size();

    for (i = 0; i < n - 1; i++) {
      for (j = i + 1; j < n; j++)
        if (arr[i] == 2 * arr[j] ||
            arr[j] == 2 * arr[i])  // from the constraints in problem statement.

          return true;
    }
    return false;
  }
};

// brute force