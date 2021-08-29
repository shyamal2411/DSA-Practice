#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/longest-uncommon-subsequence-ii/
class Solution {
public:
    
    bool isSubsequence(string str,string s){
        int j = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]==str[j])
                j++;
            if(j==str.length())
                break;
        }
        return j==str.length();
    }
    
    int findLUSlength(vector<string>& strs) {

        // sort strings to start from bigger length
        sort(strs.begin(),strs.end(),[](string& a,string& b){
           return a.length()>b.length(); 
        });
        
        for(int i=0;i<strs.size();i++){
            for(int j=0;j<strs.size() and strs[j].length()>=strs[i].length();j++){
        
                if(i!=j and isSubsequence(strs[i],strs[j]))
                    goto h;
            }
            return strs[i].length();
            h:;
        }
        return -1;
    }
};
// TIME COMPLEXITY:- O(NLOG(N) + MN^2)
// SPACE COMPLEXITY:- O(1)
    

int main(){
    Solution s;
    vector<string> strs;
    strs.push_back("abc");
    strs.push_back("ab");
    strs.push_back("cde");
    strs.push_back("abcd");
    strs.push_back("cd");
    strs.push_back("c");
    strs.push_back("d");
    cout<<s.findLUSlength(strs)<<endl;
    return 0;
}