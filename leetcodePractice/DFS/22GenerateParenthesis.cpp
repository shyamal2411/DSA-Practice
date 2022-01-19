#include<bits/stdc++.h> 
using namespace std;


// https://leetcode.com/problems/generate-parentheses/
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string cur;
        vector<string> res;
        dfs(n, n, cur, res);
        return res;
    }
    
private:
    void dfs(int l, int r, string cur, vector<string>& res) {
        if(l == 0 && r == 0) {  //recursion exit
            res.push_back(cur);
            return;
        }
        else{
        
            if(l > 0) {
                dfs(l-1, r, cur + '(', res);
            }
            if(r > l) {
                dfs(l, r-1, cur + ')', res);
            }
            
        }
    }
};

int main() {
    Solution s;
    vector<string> res = s.generateParenthesis(3);
    for(auto str : res) {
        cout << str << endl;
    }
    return 0;
}