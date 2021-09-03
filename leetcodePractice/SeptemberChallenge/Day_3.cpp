#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/erect-the-fence/
// https://leetcode.com/problems/erect-the-fence/discuss/616715/Simple-C%2B%2B-solution
class Solution
{
public:
    vector<vector<int>> outerTrees(vector<vector<int>> &points)
    {
        // Andrew's monotone chain method
        int n = points.size();
        vector<vector<int>> ans;
        sort(points.begin(), points.end(), mycompare);
        // left to right
        for (int i = 0; i < n; ++i)
        {
            while (ans.size() > 1 && orientation(ans[ans.size() - 2], ans.back(), points[i]) < 0)
                ans.pop_back();
            ans.push_back(points[i]);
        }
        // if all points along a line, ans.size() is n after left to right procedure
        if (ans.size() == n)
            return ans;
        // right to left
        for (int i = n - 2; i >= 0; --i)
        {
            while (ans.size() > 1 && orientation(ans[ans.size() - 2], ans.back(), points[i]) < 0)
                ans.pop_back();
            ans.push_back(points[i]);
        }
        ans.pop_back();
        return ans;
    }
    static bool mycompare(vector<int> &a, vector<int> &b)
    {
        return a[0] < b[0] || (a[0] == b[0] && a[1] < b[1]);
    }
    int orientation(vector<int> &a, vector<int> &b, vector<int> &c)
    {
        return (b[0] - a[0]) * (c[1] - b[1]) - (b[1] - a[1]) * (c[0] - b[0]);
    }
};

int main()
{
    Solution s;
    vector<vector<int>> points = {{1, 1}, {2, 2}, {2, 0}, {2, 4}, {3, 3}, {4, 2}};
    vector<vector<int>> ans = s.outerTrees(points);
    return 0;
}