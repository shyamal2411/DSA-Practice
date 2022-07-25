#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/contest/biweekly-contest-83/problems/best-poker-hand/
typedef vector<int> vi;
typedef vector<string> vst;

class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<char, int> mp1;
        unordered_map<int, int> mp2;
        
        for(auto i : suits)
            mp1[i]++;
        
        for(auto i : ranks)
            mp2[i]++;
        
        string ans = "High Card";
        
        for(auto i: mp1){
            if(i.second == 5)
                ans = "Flash";
            break;
        }
        
        for(auto i: mp2){
            if(i.second >= 3){ans = "Three of a Kind"; break;}
            if(i.second >= 2){ans = "Pair"; break;}
        }
        return ans;
    }
};

int main(){
Solution ss;
vector<int> ranks = {13,2,3,1,9};
vector<char> suits = {'a','a','a','a','a'};
cout<<ss.bestHand(ranks, suits);
return 0;
}