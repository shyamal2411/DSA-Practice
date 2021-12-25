#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/basic-calculator-ii/
class Solution {
public:
    int calculate(string s) {
        int i = 0, ans = 0, num = 0;
        int interim = 0;
        char op = '+';
        while(i < s.size()){
            if(isdigit(s[i])){
                num = 0;
                while(i < s.size() && isdigit(s[i])){
                    num = num * 10 + s[i] - '0';
                    i++;
                }
                if(op == '+' || op == '-'){
                    ans += interim;
                    interim = num * (op == '-' ? -1 : 1);
                }else if(op == '*'){
                    interim *= num;
                }else if(op == '/'){
                    interim /= num;
                }
                continue;
            }
            else if(s[i] != ' ') op = s[i];
           
            i++;
        }    

        ans += interim;            
        return ans;
    }
};

int main(){
    Solution ss;
    string s = " 3+5 / 2 ";
    // string s = "3+2*2";
    cout<<ss.calculate(s)<<endl;
    return 0;
}

/*
BEG

op is set to be '+'
when we read '1', we check the operator before 1, it's '+', so first interim is 1, and "ans = 1";
when we read '+', op is set to be '+'
when we read 2, because the operator before 2 is '+', so 2 is the beginning number of the new interim, so we set interim = (+) 2;
when we read *, op is set to be *
when we read 4, interim = (+) 2*4
when we read '-', op is set to be '-'
when we read 5, we check the operator before 5 is '-' which indicates the end of current interim, so we update final answer, ans = 1 + 2*4, and interim is reset to be (-) 5;
when we read '/', op is set to be '/'
when we read '3', because the operator before 3 is '/', update interim = (-5) / 3.
When we finished reading everything, add the last interim to final answer: ans = 1 + 2*4 + (-5)/3

*/