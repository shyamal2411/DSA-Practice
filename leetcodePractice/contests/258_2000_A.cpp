#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/reverse-prefix-of-word/
class Solution {
public:
    string reversePrefix(string word, char ch) {
        for(int i=0;i<word.length();i++){
            if(word[i]==ch){
                reverse(begin(word), begin(word)+i+1);
                break;
            }
        }
        return word;
    }
};

/*
Idea is simple, find the position of ch in word. If not found return -1.
Otherwise, reverse the word starting from beginning of word till position of ch+1.
*/

int main() {
    Solution s;
    string word="abcdefg";
    char ch='d';
    cout<<s.reversePrefix(word,ch)<<endl;
    return 0;
}