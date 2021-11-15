#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/repeated-dna-sequences/
class Solution
{
public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        unordered_map<int, int> mp;
        hash<string> hashfun;
        vector<string> v;

        for (int i = 0; i + 9 < s.size(); i++)
        {
            string t = s.substr(i, 10);
            int h = hashfun(t);

            if (mp.find(h) == mp.end())
                mp[h] = 1;
            else
            {
                if (mp[h] == 1)
                {
                    v.insert(v.end(), t);
                }
                mp[h]++;
            }
        }
        return v;
    }
};

class Solution2
{
public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        unordered_map<string, int> count;
        vector<string> ans;

        if (s.size() < 10)
            return ans;

        for (int i = 0; i < s.size() - 9; i++)
            count[s.substr(i, 10)]++;

        for (auto a : count)
            if (a.second > 1)
                ans.push_back(a.first);

        return ans;
    }
};

int main()
{
    Solution ss;
    string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
    vector<string> v = ss.findRepeatedDnaSequences(s);
    for (auto a : v)
        cout << a << endl;
    return 0;
}