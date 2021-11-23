#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/letter-combinations-of-a-phone-number/
class Solution {
public:
    vector<string> ans;
    string keyPad[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "qprs", "tuv", "wxyz"};
    
    void backtrack(int index, string& path, const string& digits) {
        if (index == digits.size()) {
            ans.push_back(path);
            return;
        }
        for (char c : keyPad[digits[index] - '0']) {
            path[index] = c;
            backtrack(index + 1, path, digits);
        }
    }
    
    vector<string> letterCombinations(const string& digits) {
        if (digits.empty()) return ans;
        string path = digits;
        backtrack(0, path, digits);
        return ans;
    }
};

int main(){
    Solution ss;
    vector<string> ans = ss.letterCombinations("23");
    for (auto& s : ans) cout << s << endl;
    return 0;
}