#include<bits/stdc++.h>
using namespace std;

/*
https://leetcode.com/problems/first-unique-character-in-a-string/
*/

class Solution {
public:
    int firstUniqChar(string s) {
     unordered_map<char, int> mp;
        for(auto& c:s)
            mp[c]++;
        
        for(int i=0;i<s.size();i++)
            if(mp[s[i]]==1)
                return i;
        
        return -1;
    }
};

int main()
{
    string s="leetcode";
    Solution obj;
    int ans=obj.firstUniqChar(s);
    cout<<"The first unique character is at index "<<ans<<endl;
    return 0;
}