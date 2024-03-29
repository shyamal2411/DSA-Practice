#include<bits/stdc++.h>
using namespace std;

class DP_Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int> (n,1));
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=dp[i-1][j]+ dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};

class Recursion_Solution {
public:
        //GIVES TLE
    int uniquePaths(int m, int n) {
       return countpaths(0, 0,n, m); 
    }
    
    int countpaths(int i, int j, int n, int m){
        if(i==(n-1) && j==(m-1))
            return 1;
        if(i>=n || j>=m)
            return 0;
        else
            return countpaths(i+1, j,n,m) + countpaths(i, j+1,n,m);
    }
};
/*
Since the robot can only move right and down, when it arrives at a point, 
it either arrives from left or above. If we use dp[i][j] for the number of unique paths to arrive at the point (i, j),
 then the state equation is dp[i][j] = dp[i][j - 1] + dp[i - 1][j]. 
 Moreover, we have the base cases dp[0][j] = dp[i][0] = 1 for all valid i and j.
*/
class Best_Solution {
public:
    //more optimized solution than DP
    int uniquePaths(int m, int n) {
        int nn=n+m-2;
        int r=m-1;
        double res=1;
        
        for(int i=1;i<=r;i++)
            res=res*(nn-r+i)/i;
        
        return (int)res;
    }
};

int main(){
    int m=3,n=7;
    DP_Solution Sol;
    int result=Sol.uniquePaths(m,n);
    cout<<result<<endl;
    return 0;
}
/* EDITORIAL: 
https://leetcode.com/problems/unique-paths/discuss/22954/C%2B%2B-DP
*/