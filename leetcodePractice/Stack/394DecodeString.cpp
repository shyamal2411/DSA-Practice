#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/decode-string/
class Solution {
public:
    // Helper function to repeat substring a number of times:
    string repeat(string str, int times) {
        string res = "";
        for (int i=0; i<times; i++)
            res += str;
        return res;
    }
    
    string decodeString(string s) {
        int i=0;
        while (i < s.size()) {
            if (s[i] != ']') {
                i++;
                continue;
            }
            
            // When we get to closing parenthesis,
            // we will look back to get the letters to repeat and the number of times
            // then we replace the original part in the string and place i after that to continue.
            int j = i;
            while (s[j] != '[') // Extract letters
                j--;
        
            string lettersToRepeat = s.substr(j+1, i-j-1);
            int k = j;
            j--;
            while ((j > 0) &&(isdigit(s[j]))) // Before opening parethesis we get the number
                j--;
            
            if (j != 0) j++; // Edge case where we are at the beginning of the string
            int timeToRepeat = stoi(s.substr(j, k-j));
            
            s.replace(j, i-j+1, repeat(lettersToRepeat, timeToRepeat));
			
            // Put i in the right place now
            i = j+lettersToRepeat.size()*timeToRepeat;
        }
        return s;
    }
};

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