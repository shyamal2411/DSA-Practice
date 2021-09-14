#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseOnlyLetters(string s)
    {
        int l = 0;
        int r = s.size();
        while (l < r)
        {
            if (!isalpha(s[l]))
            {
                l++;
            }
            else if (!isalpha(s[r - 1]))
            {
                r--;
            }
            else
            {
                swap(s[l], s[r - 1]);
                l++;
                r--;
            }
        }
        return s;
    }
};

int main()
{
    Solution ss;
    string s;
    cin >> s;
    cout << ss.reverseOnlyLetters(s) << endl;
    return 0;
}