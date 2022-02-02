#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/find-smallest-letter-greater-than-target/
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
         for(char c:letters)
            if(c>target)
                return c;
        
        return letters[0];
//         vector<int> vis(26);
//         for(char c: letters)
//             vis[c-'a'] = true;
        
//         while(true){
//             target++;
//             if(target>'z')
//                 target = 'a';
//             if(vis[target-'a'])
//                 return target;
//         }
       
    }
};

int main(){
    Solution s;
    vector<char> letters = {'c','f','j'};
    char target = 'a';
    cout<<s.nextGreatestLetter(letters,target);
    return 0;
}