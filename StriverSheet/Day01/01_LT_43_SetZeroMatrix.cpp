#include<bits/stdc++.h>
using namespace std;

//Striver Sheet-Day-1
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col=1,rows= matrix.size(), cols=matrix[0].size();
        
        for(int i=0;i<rows;i++){
            if(matrix[i][0] == 0)
                col=0;
            for(int j=1; j<cols;j++)
                if(matrix[i][j]==0)
                    matrix[i][0] = matrix[0][j]=0;
        }
        for(int i=rows-1;i>=0;i--){
            for(int j=cols-1;j>=1;j--)
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
            if(col==0)
                matrix[i][0]=0;
        }
    }
};

int main(){
    Solution s;
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    s.setZeroes(matrix);
    for(auto i:matrix)
        for(auto j:i)
            cout<<j<<" ";
    cout<<endl;
    return 0;
}