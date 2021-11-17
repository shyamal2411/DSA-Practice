#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mp(256, -1);
        int left=0, right=0;
        int n=s.size();
        int len=0;
        while(right<n){
            if(mp[s[right]]!=-1)
                left = max(mp[s[right]] +1, left);
            mp[s[right]]=right;
            
            len = max(len, right - left +1);
            right++;
        }
        return len;
    }
};

int main(){
    Solution s;
    string str = "abcabcbb";
    cout<<s.lengthOfLongestSubstring(str)<<endl;
    return 0;
}