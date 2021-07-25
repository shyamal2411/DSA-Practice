/*
https://leetcode.com/contest/biweekly-contest-57/problems/check-if-all-characters-have-equal-number-of-occurrences/

Given a string s, return true if s is a good string, or false otherwise.

A string s is good if all the characters that appear in s have the same number of occurrences (i.e., the same frequency).

 

Example 1:

Input: s = "abacbc"
Output: true
Explanation: The characters that appear in s are 'a', 'b', and 'c'. All characters occur 2 times in s.
Example 2:

Input: s = "aaabb"
Output: false
Explanation: The characters that appear in s are 'a' and 'b'.
'a' occurs 3 times while 'b' occurs 2 times, which is not the same number of times.
*/

#include<bits/stdc++.h> 
using namespace std;

#define int long long 
#define nl "\n"
typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(0);cout.tie(0);

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int> mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        
        int flag=true;
        int i=0, abc;
        
        for(auto &x:mp){
            if(i>0 && x.second!=abc){
                flag=false;
                break;
            }
            i++;
            abc=x.second;
        }
        if(flag)
            return true;
        
        return false;
    }
};

void solve(){
    int n,k;
    string s;
    cin>>s;
    Solution ss;
    if(ss.areOccurrencesEqual(s))
    cout<<"true\n";
    else
    cout<<"false\n";
}

int32_t main(){
    FIO int t; t=1;
    // in t;
    while(t--) solve();
  
return 0;
}