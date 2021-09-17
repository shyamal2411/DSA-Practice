#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(), n=matrix[0].size();
        int start=0, end=m*n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int e=matrix[mid/n][mid%n];
            // cout<<matrix[mid/n][mid%n]<<endl;
            if(target<e)
                end=mid-1;
            else if(target>e)
                start=mid+1;
            else
                return true;
        }
        return false;
    }
};

// [0..n*m]
// (row, col) -> row*n + col
// i -> [i/n][i%n]

int main() {
    Solution s;
    vector<vector<int>> m{
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 50}
    };
    cout<<s.searchMatrix(m, 3)<<endl;
    // cout<<s.searchMatrix(m, 13)<<endl;
    return 0;
}