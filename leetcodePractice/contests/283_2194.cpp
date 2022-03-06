#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/contest/weekly-contest-283/problems/cells-in-a-range-on-an-excel-sheet/
class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ans;
        
        for(char c= s[0]; c <= s[3]; c++)
            for(char r= s[1]; r <= s[4]; r++)
                ans.push_back({c,r});
        
        return ans;
    }
};