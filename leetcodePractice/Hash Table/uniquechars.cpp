#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> mp;
        for(auto& c:s)
            mp[c]++;
        
        for(int i=0;i<s.size();i++)
            if(mp[s[i]]==1)
                return i;
        
        return -1;     
    }
};

int main(){
    Solution ss;
    string s = "abcde";
    cout<<ss.firstUniqChar(s);
    return 0;
}