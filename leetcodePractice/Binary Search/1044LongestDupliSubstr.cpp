#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/longest-duplicate-substring/
#define p 10000007
vector<int> roll;
// https://youtu.be/FQ8hcOOzQMU
class Solution {
public:
    
    bool match(string s, int len, int size, string &ans){
        unordered_map<int, vector<int>> m;
        int hash=0;
        for(int i=0;i<size;i++)
            hash=(hash*26 + (s[i]-'a'))%p;
        
        m[hash].push_back(0);
        
        for(int j=size;j<len;j++){
            hash=((hash-roll[size-1]*(s[j-size]-'a'))%p +p)%p;
            hash=(hash*26+(s[j]-'a'))%p;
            if(m.find(hash)!=m.end())
            {
                for(auto start:m[hash]){
                    string temp=s.substr(start, size);
                    string curr=s.substr(j-size+1, size);
                    if(temp.compare(curr)==0){
                        ans=temp;
                        return true;
                    }
                }
            }
            m[hash].push_back(j-size+1);
        }
        return false;
    }
    
    string longestDupSubstring(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int len=s.size();
        if(len==0)
            return "";
        
        roll.resize(len);
        roll[0]=1;
        for(int i=1;i<len;i++)
            roll[i]=(26*roll[i-1])%p;
        
        int low=1, high=len, mid;
        string ans="", temp;
        
        while(low<=high){
            temp="";
            mid=low+(high-low)/2;
            bool flag = match(s, len, mid, temp);
            if(flag)
            {
                if(temp.size()>ans.size())
                    ans=temp;
                low=mid+1;
            }
            else
                high=mid-1;
        }
        return ans;
    }
};

int main(){
    Solution ss;
    string s="banana";
    cout<<ss.longestDupSubstring(s);
    return 0;
}