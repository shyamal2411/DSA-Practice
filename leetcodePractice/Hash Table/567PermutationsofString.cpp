#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/permutation-in-string/
// https://leetcode.com/problems/permutation-in-string/discuss/1762432/C%2B%2B-or-Build-logic-step-by-step-or-Full-Explanation-w-Commented-code-or-Sliding-window
class Solution {
public:
    bool checkInclusion(string s, string t) {
        int n = s.length(); 
        int m = t.length(); 
        
        if(n > m) // if length of s is greater than length of t 
            return false; // then simply return false, because it is impossible
        
        // to store frequency of every character of s
        map<char,int> mp; 
        
        for(int i = 0; i < s.length(); i++)
            mp[s[i]]++; // store frequency of every character
        
        int i = 0, j = 0; //sliding window
        int count = mp.size(); // number of unique letters present in s         
        int k = s.length(); // size of the string s is our window size
        
        // start moving in string t
        while(j < m)
        {
            if(mp.find(t[j]) != mp.end()) // if this particular charcter of t is present in map
            {
                mp[t[j]]--; // then decrease its frequency in map
                
                // if any point the frequency of any character becomes zero, then we will decrease count 
                // saying that frequency of one distinct letter of s becomes zero
                if(mp[t[j]] == 0){count--;}
            }
            
            if(j - i + 1 < k) // if window size is less than required window,
            {j++;}

            else if(j - i + 1 == k) // if window size is equal to the required window,
            {
                if(count == 0) // then we check whether count is zero or not
                {
                    return true;
                //if yes we will return true saying that one possible permutation of s is present in t
                }
                
                // if not, we will add the frequency of letter when we slide it
                if(mp.find(t[i]) != mp.end())
                {
                    mp[t[i]]++;
                    
                    // if it's frequency becomes 1, then increment count also saying that, one more distinct letter is added
                    if(mp[t[i]] == 1)
                    {count++;}
                }
                
                // forward the window
                i++,j++;
            }
        }
        return false;
    }
};


int main(){
    Solution ss;
    string s="ab";
    string t="eidbaooo";
    cout<<ss.checkInclusion(s,t)<<endl;
    return 0;
}