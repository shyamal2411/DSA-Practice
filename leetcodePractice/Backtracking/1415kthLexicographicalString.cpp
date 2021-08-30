#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/
// https://www.youtube.com/watch?v=FxcSycKnUYE -   SOLUTION
class Solution {
public:
    string getHappyString(int n, int k) {
        string s="";
        vector<string> ans;
        vector<char> v{'a','b','c'};
        char prevChar=' '; // to keep track of prev chars, 
        // if we see prevChar matching present char, we don't take it
        backTrack(ans, s, v, n, prevChar);
        
        return k>ans.size()?"":ans[k-1];
    }
    
    void backTrack(vector<string> &ans, string s, vector<char> v, int n, char prevChar)
    { //we're taking ans as pass by reference, because we update ans everytime
        
        if(n==0) //string length has been reached, s.length==n
        {
            ans.push_back(s);
            return;
        }
        for(int i=0;i<v.size();i++){
            if(prevChar!=v[i]){ //checking if 2 adjacent chars are not the same
                s.push_back(v[i]);
                backTrack(ans, s, v, n-1, v[i]);//recursive call to find other solutions
                                                //with current string
                
                s.pop_back(); //backTracking step
            }
        }
    }
};

int main()
{
    Solution s;
    int n,k; cin>>n>>k;
    string ans=s.getHappyString(n,k);
    cout<<ans<<endl;
    return 0;
}