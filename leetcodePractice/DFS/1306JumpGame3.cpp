#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/jump-game-iii/
class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        vector<bool> vis(arr.size(), false);
        return dfs(arr, vis, start);
    }

       
    bool dfs(vector<int>& arr, vector<bool> &vis, int i){
        if(i < 0 || i >= arr.size() || vis[i])
            return false;
        if(arr[i] == 0)
            return true;
        vis[i] = true;
        return dfs(arr, vis, i + arr[i]) || dfs(arr, vis, i - arr[i]);
    }
};

int main(){
    Solution s;
    vector<int> arr = {4,2,3,0,3,1,2};
    cout<<s.canReach(arr, 5);
    return 0;
}