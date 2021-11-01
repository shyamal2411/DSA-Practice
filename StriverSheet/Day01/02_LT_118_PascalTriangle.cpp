#include<bits/stdc++.h>
using namespace std;

// Striver Sheet Day-01-1.2
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
  
        vector<vector<int>> r(numRows);
        for(int i=0;i<numRows;i++){
            r[i].resize(i+1);
            
            r[i][0]=r[i][i]=1;
            for(int j=1;j<i;j++){
                r[i][j]=r[i-1][j-1] + r[i-1][j];
            }
        }
        return r;
    }
};

int main(){
    Solution s;
    vector<vector<int>> r = s.generate(5);
    for(int i=0;i<r.size();i++){
        for(int j=0;j<r[i].size();j++){
            cout<<r[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}