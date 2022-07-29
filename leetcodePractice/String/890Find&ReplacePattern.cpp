#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/find-and-replace-pattern/
typedef vector<int> vi;
typedef vector<string> vst;

class Solution {
public:
    
    vector<string> findAndReplacePattern(vector<string> words, string p) {
        vector<string> ans;
        for (string w : words) if (help(w) == help(p)) ans.push_back(w);
        return ans;
    }

    string help(string w) {
        unordered_map<char, int> m;
        for (char c : w) if (!m.count(c)) 
            m[c] = m.size();
        for (int i = 0; i < w.length(); ++i)
            w[i] = 'a' + m[w[i]];
        return w;
    }    
};

int main(){
    Solution ss;
    vst words = {"abc","deq","mee","aqq","dkd","ccc"};
    string p = "abb";
    for(auto x: ss.findAndReplacePattern(words, p))
    cout<<x<<" ";
return 0;
}