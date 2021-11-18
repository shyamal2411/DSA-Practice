#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/find-all-anagrams-in-a-string/
// https://leetcode.com/problems/find-all-anagrams-in-a-string/discuss/990283/C%2B%2B-sliding-Window-with-explaination
class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        int n = s.size();
        int m = p.size();
        vector<int> Pcount(26, 0), Scount(26, 0), res;
        if (s.size() < p.size())
            return res; // base case for error cheaking. If s's length is samller than p's then there is not anagram possible
        // This loop is used to create the initial window which will be = p's length;
        // Loop through the strings and just increment the count;
        for (int i = 0; i < m; i++)
        {
            Pcount[p[i] - 'a']++;
            Scount[s[i] - 'a']++;
        }
        // For the initial window if both the arrays are same then stating index is 0;

        if (Pcount == Scount)
            res.push_back(0);

        // This loop is used to slide the window and keep cheaking for the rest of the string;
        for (int i = m; i < n; i++)
        {
            Scount[s[i] - 'a']++;     // Once a new element enters the window we should increament it's count in the Scount array;
            Scount[s[i - m] - 'a']--; // Since we include one element in the window we should decrement the count of the element that goes out of the window
            if (Pcount == Scount)
            {
                res.push_back(i - m + 1); // if both the count arrays are same then store the index;
            }
        }
        return res;
    }
};

int main()
{
    Solution ss;
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> res = ss.findAnagrams(s, p);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}