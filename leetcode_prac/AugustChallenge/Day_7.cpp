#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/palindrome-partitioning-ii/
class Solution {
public:
    int minCut(string s) {
        const int n=s.size();
        if(n<=1)
            return 0;
        
        int i,j, minCUTS[n+1];
        for(i=0;i<=n;i++)
            minCUTS[i]=i-1;
        
        for(i=1;i<n;i++)
        {
            for(j=0;(i-j)>=0 && (i+j)<n && s[i-j]== s[i+j]; ++j) // odd-length substrings 
                minCUTS[i+j+1] = min(minCUTS[i+j+1], 1 + minCUTS[i-j]);

            for(j=0;(i-j-1)>=0 && (i+j)<n && s[i-j-1]== s[i+j]; ++j) // even-length substrings
                minCUTS[i+j+1] = min(minCUTS[i+j+1], 1 + minCUTS[i-j-1]);
        }
        return minCUTS[n];
    }
};
/*
https://leetcode.com/problems/palindrome-partitioning-ii/discuss/42212/Two-C%2B%2B-versions-given-(one-DP-28ms-one-Manancher-like-algorithm-10-ms)
*/

int main()
{
    Solution mysolution;
    string s="aab";
    cout<<mysolution.minCut(s)<<endl;
    return 0;
}