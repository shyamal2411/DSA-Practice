#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/transpose-matrix/
class Solution {
    public:
        vector<vector<int>> transpose(vector<vector<int>>& A) {
            int R = A.size();
            int C = A[0].size();
            vector<vector<int>> ans(C, vector<int>(R));
            for (int r = 0; r < R; ++r)
                for (int c = 0; c < C; ++c)
                    ans[c][r] = A[r][c];
            return ans;
        }
};

int main(){
    Solution ss;
    vector<vector<int>> A = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> ans = ss.transpose(A);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}    