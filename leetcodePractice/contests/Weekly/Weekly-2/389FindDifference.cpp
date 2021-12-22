#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/contest/leetcode-weekly-contest-2/problems/find-the-difference/
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> hashmap;
        for(auto &c: s)
            hashmap[c]++;
        
        for(auto &c: t)
            hashmap[c]++;
        
        for(auto it: hashmap){
            if(it.second%2!=0)
                return it.first;
        }
        
        return '-';
    }
};

int main(){
    Solution ss;
    string s = "abcd";
    string t = "abcde";
    cout<<ss.findTheDifference(s, t)<<endl;
    return 0;
}