#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/ransom-note/
// https://leetcode.com/problems/ransom-note/discuss/1347638/C%2B%2B-Hashmap-Solution
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        multiset<char> mag(magazine.begin(), magazine.end());
        multiset<char> ran(ransomNote.begin(), ransomNote.end());
        
        return includes(mag.begin(), mag.end(), ran.begin(), ran.end());
    }
};

class Solution2 {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;
        for(int i=0;i<magazine.size();i++)
            m[magazine[i]]++;
        
        for(int i=0;i<ransomNote.size();i++){
            if(m[ransomNote[i]]==0)
                return false;
            else
                m[ransomNote[i]]--;
        }            
        return true;
    }
};

int main()
{
    Solution2 obj;
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