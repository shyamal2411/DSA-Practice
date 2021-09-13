#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char, int> mp;
        for(auto i: text)
            mp[i]++;
        
        return min({mp['b'], mp['a'],mp['l']/2, mp['o']/2, mp['n']});   
    }
};

int main(){
    Solution ss;
    string s;
    cin>>s;
    cout<<ss.maxNumberOfBalloons(s)<<endl;
    return 0;
}