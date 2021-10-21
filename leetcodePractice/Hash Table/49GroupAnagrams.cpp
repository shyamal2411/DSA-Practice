#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/group-anagrams/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        vector<vector<string>> ans;
        
        for(auto str: strs){
            string s=str;
            sort(s.begin(), s.end());
            mp[s].push_back(str);
        }
        for(auto x:mp)
            ans.push_back(x.second);
        return ans;
    }
};

int main(){
    Solution s;
    vector<string> strs{"eat", "tea", "tan", "ate", "nat", "bat"};
    auto ans=s.groupAnagrams(strs);
    for(auto x:ans)
        for(auto y:x)
            cout<<y<<" ";
    cout<<endl;
    return 0;
}