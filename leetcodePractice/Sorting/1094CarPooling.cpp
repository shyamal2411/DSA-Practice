#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/car-pooling/
class Solution {
public:
// Time: O(nlogn)
// Space: O(n)
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<pair<int, int>> v;
        
        for(int i = 0; i < trips.size(); i++){
            v.push_back({trips[i][1],trips[i][0]}); // pushing fromi , numPassengersi
            v.push_back({trips[i][2], - trips[i][0]}); // pushing toi , - numPassengersi
        }
        sort(v.begin(), v.end());
        int curr = 0;
        
        for(int i = 0; i < v.size(); i++){
            curr += v[i].second;
            
            if(curr > capacity)
                return false;
        }
        return true;
    }
};

int main(){
    Solution s;
    vector<vector<int>> trips = {{2,1,5},{3,3,7}};
    int capacity = 4;
    cout<<s.carPooling(trips, capacity);
    return 0;
}