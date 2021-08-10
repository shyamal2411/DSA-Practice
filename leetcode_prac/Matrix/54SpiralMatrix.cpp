#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/spiral-matrix/
// https://leetcode.com/problems/spiral-matrix/discuss/978853/C%2B%2B-or-0ms-faster-than-100-or-Easy-solution-with-proper-explanation
class Solution {
 public:
  vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    int i, left = 0, right = m - 1, bottom = n - 1, top = 0;
    int direction = 1;
    vector<int> v;

    while (left <= right && top <= bottom) {
      if (direction == 1) {
        for (i = left; i <= right; i++)
          v.push_back(matrix[top][i]);
        direction = 2;
        top++;
      } else if (direction == 2) {
        for (i = top; i <= bottom; i++)
          v.push_back(matrix[i][right]);
        direction = 3;
        right--;
      } else if (direction == 3) {
        for (i = right; i >= left; i--)
          v.push_back(matrix[bottom][i]);
        direction = 4;
        bottom--;
      } else if (direction == 4) {
        for (i = bottom; i >= top; i--)
          v.push_back(matrix[i][left]);
        direction = 1;
        left++;
      }
    }
    return v;
  }
};

int main() {
  // int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  Solution ss;
  vector<vector<int>> a{
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  vector<int> v = ss.spiralOrder(a);
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
  return 0;
}