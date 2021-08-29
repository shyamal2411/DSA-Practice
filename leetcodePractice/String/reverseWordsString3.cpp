#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int front=0;
        
        for(int i=0;i<=s.size();i++){
            if(i==s.size() || s[i]==' '){                
            reverse(&s[front], &s[i]);
            front=i+1;
        }
    }
        return s;
  
    }
};

int main()
{
    Solution ss;
    // string s="the sky is blue";
    // string s="Let's take LeetCode contest";
    string s="God Ding";
    cout<<ss.reverseWords(s)<<endl;
    return 0;
}