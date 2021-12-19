#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/decode-string/
class Solution {
public:
    string decodeString(string s) {
        int i = 0;
        return help(s, i);
    }
    string help(string s, int &i){
        string ans = "";
        if(i >= s.size())
            return ans;
        while(i < s.size()){
            if(isalpha(s[i]))
                ans += s[i];
            else if(s[i] == ']')
                return ans;
            else if(isdigit(s[i])){
                int loops = 0;
                while(isdigit(s[i]))
                    loops = loops * 10 + s[i++] - '0';
                string pat = help(s, ++i);
                for(int j = 0; j < loops; j++)
                    ans += pat;
            }
            i++;
        }
        return ans;
    }
};
/*
Every time we meet a '[', we treat it as a subproblem so call our recursive function to get the content in that '[' and ']'. After that, repeat that content for 'num' times.
Every time we meet a ']', we know a subproblem finished and just return the 'word' we got in this subproblem.
Please notice that the 'pos' is passed by reference, use it to record the position of the original string we are looking at.
*/

int main(){
    Solution s;
    cout<<s.decodeString("3[a]2[bc]")<<endl;
    return 0;
}