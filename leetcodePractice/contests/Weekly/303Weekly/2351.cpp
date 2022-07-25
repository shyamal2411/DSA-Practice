#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;

class Solution {
public:
    char repeatedCharacter(string s) {
        
        unordered_map<char, int> mp;
        
        for(auto i: s){
            if(mp[i] == 0)
                mp[i]++;
            else if(mp[i] == 1)
                return i;
        }
        return 0;
    }
};

int main(){
Solution ss;
string s = "abccbaacz";
cout<<ss.repeatedCharacter(s);
return 0;
}