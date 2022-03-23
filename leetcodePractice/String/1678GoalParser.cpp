#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/goal-parser-interpretation/
class Solution {
public:
    string interpret(string command) {
          string ans;
        for(int i=0;i<command.size();i++)
        {
            if(command[i] == 'G')
            {
                ans += 'G';
            }
            else if(command[i] == '(' && command[i+1] == ')')
            {
                ans += 'o';
            }
            else if(command[i] == '(' && command[i+1] == 'a')
            {
                ans += "al";
            }
        }
        return ans;
    }
};

int main(){
    Solution ss;
    string command = "G()()()()(al)";
    // string command = "(al)G(al)()()G";
    cout<<ss.interpret(command)<<endl;
    return 0;
}