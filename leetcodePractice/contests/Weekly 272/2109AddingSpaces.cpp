#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/adding-spaces-to-a-string/
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
       string ans;
        for(int i = 0, j = 0; i < s.size(); i++){
            if(j < spaces.size() && i == spaces[j]){
                ans += " ";
                j++;
            }
            ans += s[i]; 
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> v{8,13,15};
    cout<<s.addSpaces("LeetcodeHelpsMeLearn",v)<<endl;
    return 0;
}