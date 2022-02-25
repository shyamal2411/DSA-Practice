#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/compare-version-numbers/
class Solution
{
public:
    int compareVersion(string version1, string version2)
    {
        int i = 0, j = 0, sum1 = 0, sum2 = 0;
        int n = version1.size(), m = version2.size();
        while (i < n || j < m)
        {
            while (i < n && version1[i] != '.')
            {
                sum1 = sum1 * 10 + (version1[i] - '0');
                i++;
            }
            while (j < m && version2[j] != '.')
            {
                sum2 = sum2 * 10 + (version2[j] - '0');
                j++;
            }
            if (sum1 > sum2)
                return 1;
            else if(sum1 < sum2)
                return -1;

            sum1 = 0, sum2 = 0;
            i++, j++;
        }
        return 0;
    }
};

int main()
{
    Solution s;
    string s1 = "1.0.1";
    string s2 = "1.0";
    cout << s.compareVersion(s1, s2);
    return 0;
}