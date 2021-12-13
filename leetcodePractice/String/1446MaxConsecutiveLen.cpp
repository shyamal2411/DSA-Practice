#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/consecutive-characters/
class Solution {
public:
    int maxPower(string s) {
        if(s.size() == 1)
            return 1; //edge case got WA
        int curMax = 0, maxLen = 0;
        for(int i = 1; i < s.size(); i++){
            if(s[i] == s[i-1])
                curMax++;
            else
                curMax = 0;
            
            maxLen = max(maxLen, curMax + 1);
        }
        return maxLen;
    }
};

int main(){
    Solution s;
    cout << s.maxPower("leetcode") << endl;
    // cout << s.maxPower("abbcccddddeeeeedcba") << endl;
    // cout << s.maxPower("triplepillooooow") << endl;
    // cout << s.maxPower("hooraaaaaaaaaaay") << endl;
    // cout << s.maxPower("tourist") << endl;
    return 0;
}