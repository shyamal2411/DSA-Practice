#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/slowest-key/
// https://leetcode.com/problems/slowest-key/discuss/1146618/C%2B%2B-map-and-sort

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        unordered_multimap<int, char> mp;
        mp.insert({releaseTimes[0], keysPressed[0]});
        
        for(int i=1;i<releaseTimes.size();i++)
            mp.insert({releaseTimes[i]-releaseTimes[i-1], keysPressed[i]});
        
        vector<pair<int, char>> p(mp.begin(), mp.end());
        sort(p.begin(), p.end(), compare);
        return p[0].second;
    }
    
    static bool compare(pair<int, char> &a, pair<int, char> &b)
        {
        return (a.first==b.first)? a.second>b.second : a.first>b.first;
        }
};

class Solutionn {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char resKey=keysPressed[0];
        int resTime=releaseTimes[0];
        
        for(int i=1;i<releaseTimes.size();i++){
            int curTime=releaseTimes[i]-releaseTimes[i-1];
            
            if(curTime >= resTime){
                if(curTime == resTime)
                    resKey=max(resKey, keysPressed[i]);
                else{
                    resKey = keysPressed[i];
                    resTime =curTime;
                }
            }
        }
        return resKey;
    }
};

int main()
{
    Solutionn s;
    vector<int> releaseTimes = {12,23,36,46,62};
    string keysPressed = "spuda";
    cout<<s.slowestKey(releaseTimes, keysPressed)<<endl;
    return 0;
}