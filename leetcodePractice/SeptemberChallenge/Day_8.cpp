#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/shifting-letters/

/*
One pass to count suffix sum of shifts.
One pass to shift letters in string S
You can combine 2 passes as I did in 2-lines C++ version.

Time Complexity:
O(N)
*/

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        for (int i = shifts.size() - 2; i >= 0; i--)
            shifts[i] = (shifts[i] + shifts[i + 1]) % 26;
        for (int i = 0; i < shifts.size(); i++)
            s[i] = (s[i] - 'a' + shifts[i]) % 26 + 'a';
        return s;
    }
};

int main()
{
    string s = "abc";
    vector<int> shifts = {3, 5, 9};
    Solution sol;
    cout << sol.shiftingLetters(s, shifts) << endl;
    return 0;
}