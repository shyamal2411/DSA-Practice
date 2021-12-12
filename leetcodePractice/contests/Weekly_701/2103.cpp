#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/contest/weekly-contest-271/problems/rings-and-rods/
class Solution {
public:
    int countPoints(string r) {
        int n = r.size(), ans = 0;
        vector<vector<int>> nums(10, vector<int> (3, 0));
        for(int i = 0; i<n; i=i+2){
            if(r[i] == 'R')
                nums[r[i+1]- '0'][0] = 1;
            else if(r[i] == 'G')
                nums[r[i+1]- '0'][1] = 1;
                else
                nums[r[i+1]- '0'][2] = 1;
        }
        for(auto &i:nums){
            if(i[0] == 1 && i[1] == 1 && i[2] == 1)
                ans++;
        }
        return ans;
    }
};

int main(){
    Solution ss;
    cout<<ss.countPoints("RGRGRGRGR");
    return 0;
}