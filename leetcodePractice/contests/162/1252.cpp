#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/contest/weekly-contest-162/problems/cells-with-odd-values-in-a-matrix/
class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {

        vector<bool> r(n, false);
        vector<bool> c(m, false);
        
        for(int i=0; i<indices.size(); i++) {
            r[indices[i][0]] = r[indices[i][0]]^true;
            c[indices[i][1]] = c[indices[i][1]]^true;
        }
        
        int countR = 0;
        int countC = 0;
        
        for(int i=0; i<n; i++) {
            if(r[i] %2 == 1)
                countR++;
        }
        
        for(int j=0; j<m; j++) {
            if(c[j] %2 == 1)
                countC++;
        }
        
        return  countR*m + countC*n - 2*countR*countC;
        }
};