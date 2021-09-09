#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/max-points-on-a-line/
//https://www.youtube.com/watch?v=DCbPOZTNfHc - FOR REFERENCE
// https://leetcode.com/problems/max-points-on-a-line/discuss/612420/Simple-C%2B%2B-solution
class Solution
{
public:
    int generateGCD(int a, int b)
    {
        if (b == 0)
            return a;
        return generateGCD(b, a % b);
    }

    int maxPoints(vector<vector<int>> &points)
    {
        if (points.size() <= 2)
        {
            return points.size();
        }
        int overlap = 0, res = 0, curr = 0;
        int x, y, gcd;
        map<int, map<int, int>> freq;
        for (int i = 0; i < points.size() - 1; i++)
        {
            overlap = 0;
            curr = 0;
            freq.clear();
            for (int j = i + 1; j < points.size(); j++)
            {
                x = points[j][0] - points[i][0];
                y = points[j][1] - points[i][1];
                if (x == 0 && y == 0)
                {
                    overlap++;
                    continue;
                }
                gcd = generateGCD(x, y);

                if (gcd != 0)
                {
                    x /= gcd;
                    y /= gcd;
                }
                freq[x][y]++;
                curr = max(curr, freq[x][y]);
            }
            res = max(res, curr + overlap + 1);
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> points{{1, 1}, {2, 2}, {3, 3}};
    cout << s.maxPoints(points);
    return 0;
}