class Solution {
 public:
  int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
    int ans = INT_MIN, row = matrix.size(), col = matrix[0].size();

    for (int l = 0; l < col; l++) {
      vector<int> sum(row);  // vector to the size of row

      for (int r = l; r < col; r++) {
        for (int i = 0; i < row; i++)
          sum[i] +=
              matrix[i][r];  // add the elements of the current row and column

        set<int> s = {0};
        int cur_sum = 0;  // current temp sum which will be changing if we get
                          // greater value
        for (int sums : sum) {
          cur_sum += sums;
          auto it = s.lower_bound(cur_sum - k);
          if (it != end(s))
            ans = max(ans, cur_sum - *it);
          s.insert(cur_sum);
        }
      }
    }
    return ans;
  }
};
/*
https://youtu.be/IDv9yvQN3Uc - code
https://youtu.be/yCQN096CwWM - for best logic
*/