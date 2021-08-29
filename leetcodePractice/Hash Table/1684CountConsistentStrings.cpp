#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/count-consistent-strings/
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        //map for allowed characters
        unordered_map<char, bool> mp;
        for(auto x:allowed)
        {
            if(!mp[x]) 
                mp[x]=1;
        }
        
        int count=0;
        
        //Traversing through each character in words
        for(auto x:words){
            bool flag=1;
            for(auto y:x){
                if(mp.find(y)==mp.end()){
    //checking if character isn't present as key in the map
                    flag=0; 
                    break;
                }
            }
            //if flag remains 1 throughout the whole word, increment count i.e. the word is present
            if(flag==1)
                count++;
        }
        return count;
    }
};

int main() {
   string allowed = "abc";
   vector<string> words = { "aa", "aaa", "aaaa", "ab", "ac" };
   Solution s;
   cout<<s.countConsistentStrings(allowed, words);
   return 0;
}