#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/rank-transform-of-a-matrix/
// https://youtu.be/xjFcgsMzwew
class Solution {
public:
    int find_set(int x,vector<int>& parent){
        if(parent[x]==x)
            return x;
        return parent[x] = find_set(parent[x],parent);
    }
    vector<vector<int>> matrixRankTransform(vector<vector<int>>& matrix) {
        int row = matrix.size(),col = matrix[0].size();
        vector<vector<int>> ans(row,vector<int>(col));
        map<int,vector<pair<int,int>>> ele;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++)
                ele[matrix[i][j]].push_back({i,j}); // put same value element in same vector
        }
        
        vector<int> rank(row+col,0); // rank of rows and columns
        for(auto itr:ele){
            vector<int> parent(row+col,0); // parent vector
            for(int i=0;i<parent.size();i++)
                parent[i] = i;
            for(auto it:itr.second){
                int i = it.first,j = it.second;
                int xroot = find_set(i,parent),yroot = find_set(j+row,parent); // find parent's
                parent[xroot] = yroot; // union, make row point to same column
                rank[yroot] = max(rank[xroot],rank[yroot]); // find maximum rank over this connected component
            }
            vector<int> curr = rank;
            // assign each cell, correct rank
            for(auto it:itr.second){
                int i = it.first,j = it.second;
                int r = find_set(i,parent);
                ans[i][j] = 1 + rank[r];
                curr[i] = rank[r] + 1;
                curr[j+row] = rank[r] + 1;
            }
            swap(rank,curr);
        }
        return ans;
    }
};


//main function
int main(){
    // input
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> ans = {{1,4,3},{2,5,6},{7,8,9}};
    // output
    Solution ss;
    vector<vector<int>> myans = ss.matrixRankTransform(matrix);
    for(auto itr:myans){
        for(auto it:itr)
            cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}