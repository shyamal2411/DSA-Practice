#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/number-of-valid-words-for-each-puzzle/
// https://leetcode.com/problems/number-of-valid-words-for-each-puzzle/discuss/1567324/C%2B%2BPython-Clean-Solutions-words-Detailed-Explanation-or-Bit-masking-and-Trie-Approaches
class Solution {
public:
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
      unordered_map<int, int> mp;         // { bitmask : frequency }
        vector<int> ans(size(puzzles));
		// following function returns bitmask of a string
        auto getBitmask = [](string& s) {
            int bitmask = 0;
            for(auto c : s) bitmask |= 1 << c-'a';
            return bitmask;
        };
		// generating bitmask for each word and filling in hashmap
        for(auto& word : words)  mp[getBitmask(word)]++;
		// generate bitmask for each puzzle and enumerate over its subset
        for(int i = 0; auto& puzzle : puzzles) {
            int mask = getBitmask(puzzle), cnt = 0, firstLetter = 1 << puzzle[0]-'a';
            for(int submask = mask; submask; submask = (submask - 1) & mask)    // https://cp-algorithms.com/algebra/all-submasks.html
                if(submask & firstLetter)    // ensure 1st letter is present in submask to satisfy condition-1
                    cnt += mp[submask];      // add count of words having same bitmask as submask
            ans[i++] = cnt;
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<string> words = {"aaaa","asas","able","ability","actt","actor","access"};
    vector<string> puzzles = {"aboveyz","abrodyz","abslute","absoryz","actresz","gaswxyz"};
    vector<int> ans = s.findNumOfValidWords(words, puzzles);
    for(auto i : ans) cout<<i<<" ";
    return 0;
}