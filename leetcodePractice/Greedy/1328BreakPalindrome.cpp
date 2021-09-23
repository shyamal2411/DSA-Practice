#include <bits/stdc++.h>
using namespace std;

// September leetcoding challenge-Day:23
// Problem: Break Palindrome
// https://leetcode.com/problems/break-a-palindrome/
class Solution
{
public:
    string breakPalindrome(string palindrome)
    {
        int n = palindrome.size();
        if (n == 1)
            return "";

        for (int i = 0; i < n / 2; i++)
        {
            if (palindrome[i] != 'a')
            {
                palindrome[i] = 'a';
                return palindrome;
            }
        }

        palindrome[n - 1] = 'b';
        return palindrome;
    }
};

int main()
{
    Solution ss;
    string s = "abccba";
    cout << ss.breakPalindrome(s) << endl;
    return 0;
}