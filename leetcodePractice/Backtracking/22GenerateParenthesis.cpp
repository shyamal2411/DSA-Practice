#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/generate-parentheses/

// BETTER SOLUTION
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        int open = 0, close = 0; //initially both braces = 0
        vector<string> ans; //final ans
        string s; //for each combination str
        help(n, open, close, s, ans);
        return ans;
    }
    
    void help(int n, int open, int close, string &s, vector<string> &ans){
       
//         if number of close braces greater than num of open braces, or num of 
//         open braces greater than n then this is invalid combination return from here
        if(close>open || open>n)
            return;
        
//         if num of open+close = 2*n then this is valid 
        if(open+close == 2*n){
            ans.push_back(s);
            return;
        }
        
        s.push_back('('); //push open brace in string
        help(n, open+1, close, s, ans); //recurse for open+1
        s.pop_back(); //backtrack
        
        // push closing bracket
        s.push_back(')');
        help(n, open, close+1, s, ans); // recurse for close+1
        s.pop_back(); //backtrack
    }
};

class Solution {
public:

vector<string> result;
vector<string> generateParenthesis(int n) {
    helper("", n, 0);
    return result;
}

/*  this hepler function insert result strings to "vector<string> result"
	When number of '(' less than "n", can append '(';
	When number of '(' is more than number of ')', can append ')';

	string s : current string;
	int leftpare_need : number of '(' that have not put into "string s";
	int moreleft : number of '(' minus number of ')' in the "string s";
*/

void helper(string s, int leftpare_need, int moreleft)
{
	if(leftpare_need == 0 && moreleft == 0)
	{
	    result.push_back(s);
	    return;
	}
	if(leftpare_need > 0)
		helper(s + "(", leftpare_need - 1, moreleft+1);
	if(moreleft > 0)
		helper(s + ")", leftpare_need, moreleft - 1);
}
};

int main(){
    Solution s;
    vector<string> result = s.generateParenthesis(3);
    for(int i = 0; i < result.size(); i++)
        cout << result[i] << endl;
    return 0;
}