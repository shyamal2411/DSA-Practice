#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/largest-plus-sign/
class Solution
{
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>> &mines)
    {
        vector<vector<int>> mat(n, vector<int>(n, 1));
        vector<vector<int>> left(n, vector<int>(n, 1));
        vector<vector<int>> right(n, vector<int>(n, 1));
        vector<vector<int>> up(n, vector<int>(n, 1));
        vector<vector<int>> down(n, vector<int>(n, 1));

        for (auto c : mines)
            mat[c[0]][c[1]] = up[c[0]][c[1]] = left[c[0]][c[1]] = right[c[0]][c[1]] = down[c[0]][c[1]] = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                left[i][j] = mat[i][j] ? 1 + left[i][j - 1] : 0;
                down[j][i] = mat[j][i] ? 1 + down[j - 1][i] : 0;
            }
            for (int j = n - 2; j >= 0; j--)
            {
                right[i][j] = mat[i][j] ? 1 + right[i][j + 1] : 0;
                up[j][i] = mat[j][i] ? 1 + up[j + 1][i] : 0;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j])
                    ans = max(ans, min(min(left[i][j], right[i][j]), min(up[i][j], down[i][j])));
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    int n = 5;
    // vector<vector<int>> mines = {{0, 0}, {0, 1}, {0, 2}, {2, 0}, {2, 1}, {2, 2}};
    vector<vector<int>> mines = {{4,2}};
    cout << s.orderOfLargestPlusSign(n, mines);
    return 0;
}