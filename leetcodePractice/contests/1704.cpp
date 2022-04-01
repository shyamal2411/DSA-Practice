#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/contest/weekly-contest-221/problems/determine-if-string-halves-are-alike/
class Solution {
public:
    bool halvesAreAlike(string s) {
        int count1 = 0, count2 = 0, n = s.size();
        for(int i = 0; i < n/2; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                count1++;
        }
        for(int i = n/2+1; i < n-1; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                count2++;
        }
        return count1 == count2;
    }
};

int main(){
    Solution ss;
    string s = "abcde";
    cout<<ss.halvesAreAlike(s)<<endl;
    return 0;
}