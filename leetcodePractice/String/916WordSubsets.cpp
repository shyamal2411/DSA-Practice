#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/word-subsets/
typedef vector<int> vi;
typedef vector<string> vst;

class Solution {
public:
    vector<int> getFrequencyTable(string &s)
    {
        vector<int> freqVec(26);
        for(auto c: s)freqVec[c - 'a']++;
        return freqVec;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<vector<int>> freq(words2.size(), vector<int> (26));
        for(int i = 0; i < words2.size(); i++)
        {
            freq[i] = getFrequencyTable(words2[i]);
        }
        
        //get maximum frequency for every character from 'a' to 'z' present in words2
        vector<int> maxF(26);
        for(int i = 'a'; i <= 'z' ;i++)
        {
            int maxx = 0;
            for(int j = 0; j < words2.size(); j++)maxx = max(maxx, freq[j][i - 'a']);
            maxF[i - 'a'] = maxx;
        }
        
        //now we just need to iterate over strings in words1 and find out if that string has frequency array bigger than maxF
        vector<string> ans;
        for(int i = 0 ;i < words1.size(); i++)
        {
            vector<int> temp = getFrequencyTable(words1[i]);
            bool isValid = true;
            for(int j = 0 ;j < 26;j ++){
                if(temp[j] < maxF[j])isValid = false;
            }
            if(isValid)ans.push_back(words1[i]);
        }
        return ans;
    }
};

int main(){
Solution ss;
vst words1 = {"amazon","apple","facebook","google","leetcode"};
vst words2 = {"e", "o"};

for(auto s: ss.wordSubsets(words1, words2))
    cout<<s<<endl;

return 0;
}