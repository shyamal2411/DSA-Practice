#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool areNumbersAscending(string s)
    {
        for (auto i = 0, prev = -1; i < s.size(); i++)
        {
            if (isdigit(s[i]))
            {
                int n = s[i++] - '0';
                if (i < s.size() && isdigit(s[i]))
                {
                    n = 10 * n + s[i++] - '0';
                }
                if (n <= prev)
                    return false;
                prev = n;
            }
        }
        return true;
    }
};

int main()
{
    Solution ss;
    string s;
    s = "1 box has 3 blue 4 red 6 green and 12 yellow marbles";
    if (ss.areNumbersAscending(s))
        cout << "true\n";
    else
        cout << "false\n";
    return 0;
}