#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/spiral-matrix-ii/
// https://leetcode.com/problems/spiral-matrix-ii/solution/
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int> (n));
        int count=1;
        for(int layer=0;layer<(n+1)/2; layer++){
            //direction-1 traverse from left to right
            for(int ptr=layer; ptr<n-layer;ptr++){
                ans[layer][ptr] = count++;
            }
            //direction 2 - traverse from top to bottom
            for(int ptr=layer+1;ptr<n-layer;ptr++){
                ans[ptr][n-layer-1]=count++;
            }
            //direction-3 traverse right to left
            for(int ptr=n-layer-2;ptr>=layer;ptr--){
                ans[n-layer-1][ptr]=count++;
            }
            //direction-4 traverse from bottom to top
            for(int ptr=n-layer-2;ptr>layer; ptr--){
                ans[ptr][layer] =count++;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<vector<int>> ans = s.generateMatrix(4);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}