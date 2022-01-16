#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/maximize-distance-to-closest-person/
//We have 3 possible cases here
// Alex sits in between 2 people
// Alex sits on atmost right
// Alex sits on atmost left


// Case-1: find distance between 2 people and find its mid 
// Test case: 1 0 0 0 1 0 1
// Case-2: find first person from left
// A 0 0 0 1
// Case-3: find person from right
// 0 0 1 0 0 A

class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        if(n == 0)
            return 0;
        int ans = 0;
        int val = 0;
        // case-1
        for(int i = 0; i < n; i++){
            if(seats[i] == 1)
                val = 0;
            else{
                val++;
                ans = max(ans, (val+1)/2);
            }
        }
        // case-2
        for(int i = 0; i < n; i++){
            if(seats[i] == 1){
                ans = max(ans, i);
                break;
            }                
        }
        // case-3
        for(int i = n-1; i >= 0; i--){
            if(seats[i] == 1){
                ans = max(ans, n-1-i);
                break;
            }
        }
        return ans;
    }
};

int main(){
    Solution ss;
    vector<int> seats = {1,0,0,0,1,0,1};
    cout<<ss.maxDistToClosest(seats);
    return 0;
}