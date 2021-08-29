#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/group-anagrams/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ump;
        int i=0;
        for(auto s: strs){
            sort(s.begin(), s.end());
            ump[s].push_back(strs[i++]);
        }
    vector<vector<string>> ans;
        for(auto n:ump){
            // sort(n.second.begin(), n.second.end()); // no need to sort again
            ans.push_back(n.second);
        }
        return ans;
    }
};

int main(){
    Solution ss;
    vector<string> strs{"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ans=ss.groupAnagrams(strs);
    
    for(auto n:ans){
        for(auto s:n){
            cout<<s<<" ";
        }
        cout<<endl;
    }
    return 0;
}