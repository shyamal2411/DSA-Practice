#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/matchsticks-to-square/
typedef vector<int> vi;
typedef vector<string> vst;

class Solution {
public:
    bool makesquare(vector<int>& sticks) {
        int peri = 0;
        for(auto val : sticks)
            peri += val;
        
        if(peri % 4 != 0)
            return false;
        
        vector<int> sides(4, 0);
            
        int sideLength = peri/4;
        sort(sticks.begin(), sticks.end(), greater<int>());
        
        return help(sides, sticks, 0, sideLength);
    }
    
    bool help(vector<int> &sides, vector<int> &sticks, int ind, int sideLength){
        
        if(ind == sticks.size())
            return true;
        
        for(int i = 0; i < 4; i++){
            if(sides[i] + sticks[ind] <= sideLength){
                sides[i] += sticks[ind];
                
                if(help(sides, sticks, ind + 1, sideLength)) //check next matchstick
                    return true;
                
                sides[i] -= sticks[ind]; //backtrack and try for another side
            }
        }
        return false;
    }
};

int main(){
Solution ss;
    vector<int> vec = {1,1,2,2,2};
    bool res = ss.makesquare(vec);
    cout << res << endl;
return 0;
}