#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/expression-add-operators/
class Solution {
public:
    vector<string> addOperators(string num, int target) {
        vector<string> ans;
        dfs(num, 0, target, "", 0, 0, ans);
        return ans;
    }
    
void dfs(string &num, int start, int target, string path, long prev, long cur, vector<string> &ans)
{
    if(start==num.size() && prev+cur==target)
        ans.push_back(path);
    
    for(int i=1;start+i<=num.size();i++){
        string s=num.substr(start, i);
        long n=stoll(s);
        if(to_string(n).size()!=s.size())
            return;
        if(!start)
            dfs(num, i, target, s, 0, n, ans);
        else{
            dfs(num, start+i, target, path + "+" +s,prev+cur, n, ans);
            dfs(num, start+i, target, path + "-" +s,prev+cur, -n, ans);
            dfs(num, start+i, target, path + "*" +s,prev,cur * n, ans);

        }
    }
}
    
};

int main(){
    Solution ss;
    vector<string> ans=ss.addOperators("123", 6);
    for(auto s:ans){
    cout<<s<<endl;
    }
    return 0;
}