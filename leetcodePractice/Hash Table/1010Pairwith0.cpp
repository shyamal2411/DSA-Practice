#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int i, j;
        int count = 0;
        vector<int> v(60,0);
        for(i = 0; i < time.size(); i++){
            int t = time[i]%60;
            if(t == 0)
                count += v[0];
            else
                count += v[60-t];
            v[t]++;
        }
        return count;
    }
};

int main(){
    Solution ss;
    vector<int> time = {30,20,150,100,40};
    cout<<ss.numPairsDivisibleBy60(time);
    return 0;
}