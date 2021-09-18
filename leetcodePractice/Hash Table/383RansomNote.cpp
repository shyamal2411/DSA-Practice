#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/ransom-note/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        multiset<char> mag(magazine.begin(), magazine.end());
        multiset<char> ran(ransomNote.begin(), ransomNote.end());
        
        return includes(mag.begin(), mag.end(), ran.begin(), ran.end());
    }
};

int main()
{
    Solution obj;
    cout<<obj.canConstruct("aa","aa")<<endl;
    cout<<obj.canConstruct("aa","aab")<<endl;
    cout<<obj.canConstruct("aa","a")<<endl;
    cout<<obj.canConstruct("aa","ab")<<endl;
    cout<<obj.canConstruct("aa","")<<endl;
    cout<<obj.canConstruct("","aa")<<endl;
    cout<<obj.canConstruct("","")<<endl;
    cout<<obj.canConstruct("a","a")<<endl;
    cout<<obj.canConstruct("a","b")<<endl;
    return 0;
}