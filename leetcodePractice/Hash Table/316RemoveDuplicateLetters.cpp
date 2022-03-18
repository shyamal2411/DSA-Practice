#include<bits/stdc++.h> 
using namespace std;

// 18/03/2022
// https://leetcode.com/problems/remove-duplicate-letters/
class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> count(26, 0), vis(26, 0);
        string ans ="";
        int n = s.size();
        
        for(int i = 0; i < n; i++)
            count[s[i] - 'a']++;
        
        for(int i = 0; i < n; i++){
            count[s[i] - 'a']--;
            
            if(!vis[s[i] - 'a']){
                while(ans.size() > 0 && ans.back() > s[i] && count[ans.back() - 'a'] > 0){
                    vis[ans.back() - 'a'] = 0;
                    ans.pop_back();
                }
                ans+=s[i];
                vis[s[i] - 'a'] = 1;
            }
        }
        return ans;
    }
};
// https://leetcode.com/problems/remove-duplicate-letters/discuss/1859332/C%2B%2B-oror-Explained-With-Algorithm-oror-0ms-oror-100-oror-Easy-and-Simple

int main(){
    Solution s;
    string str = "cbacdcbc";
    cout<<s.removeDuplicateLetters(str)<<endl;
    return 0;
}