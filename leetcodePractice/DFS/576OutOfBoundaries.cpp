#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/out-of-boundary-paths/
typedef vector<int> vi;
typedef vector<string> vst;

class Solution {
 public:
  int memo[51][51][51];
  int mod = 1000000007;

  long dfs(int m, int n, int maxMove, int i, int j) {
    if (i >= m || i < 0 || j >= n || j < 0)
      return 1;

    if (maxMove <= 0)
      return 0;

    if (memo[i][j][maxMove] != -1)
      return memo[i][j][maxMove];

    long ans = 0;

    ans += dfs(m, n, maxMove - 1, i - 1, j);
    ans += dfs(m, n, maxMove - 1, i + 1, j);
    ans += dfs(m, n, maxMove - 1, i, j + 1);
    ans += dfs(m, n, maxMove - 1, i, j - 1);

    return memo[i][j][maxMove] = ans % mod;
  }

  int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
    memset(memo, -1, sizeof(memo));
    return dfs(m, n, maxMove, startRow, startColumn);
  }
};

int main(){
Solution ss;
int m = 3, n = 3, maxMove = 3, startRow = 0, startColumn = 0;
cout<<ss.findPaths(m, n, maxMove, startRow, startColumn)<<endl;
return 0;
}