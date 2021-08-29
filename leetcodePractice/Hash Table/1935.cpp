#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/maximum-number-of-words-you-can-type/
// https://leetcode.com/problems/maximum-number-of-words-you-can-type/discuss/1344961/Simple-C%2B%2B-Code-or-No-Hash-or-No-StringStream-or-Explained-with-Intuition
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool badWord=0;
        int i,j, ans=0;
        for(i=0;i<text.length();i++){
            
            for(j=0;j<brokenLetters.length();j++)
                if(text[i]==brokenLetters[j])
                    badWord=1;
            
            if(text[i]==' '|| i==text.length()-1){
                if(badWord==0)
                    ans++;
                else
                    badWord=0;  
            }
        }
        return ans;
    }
}; 

int main(){
    string text="hello world";
    string brokenLetters="lo";
    Solution ss;
    cout<<ss.canBeTypedWords(text,brokenLetters)<<endl;
    return 0;
}