#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/unique-binary-search-trees/
class Solution {
public:
    //CATALAN NUMBERS APPROACH
    //AROUND SAME AS FIBONACCI NUMBERS
    int numTrees(int n) {
        int dp[n+1];
        dp[0]=1; //initializing numbers as we do in fibonacci
        dp[1]=1;
        
        for(int i=2;i<n+1;i++){
            dp[i]=0;
            
            for(int j=0;j<i;j++){
                dp[i] +=dp[j]*dp[i-1-j];
            }
        }
        return dp[n];
    }
};

int main(){
    Solution s;
    int n; cin>>n;
    cout<<s.numTrees(n)<<endl;
    return 0;
}