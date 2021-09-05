#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/orderly-queue/
class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k>1){
            sort(s.begin(), s.end());
            return s;
        }
        string ans=s;
        for(int i=1;i<s.size();i++)
            ans=min(ans, s.substr(i)+s.substr(0,i));
        
        return ans;
    }
};

//main function
int main(){
    string s="cba";
    int k=1;
    Solution ss;
    cout<<ss.orderlyQueue(s,k);
    return 0;
}