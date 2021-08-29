#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        
        int dp[n+2][n+2];
        memset(dp, 0, sizeof(dp));
        
        for(int size=1;size<=n;size++){
            for(int i=0, j=size-1;j<n;i++,j++){
                int parity=(j+i+n)%2;
                
                if(parity==1)
              dp[i+1][j+1] = max(piles[i] + dp[i+2][j+1], piles[j] + dp[i+1][j]);                
                else
              dp[i+1][j+1] = max(-piles[i] + dp[i+2][j+1], piles[j] + dp[i+1][j]);      
            }
        }
        return dp[1][n]>0;
    }
};

int main()
{
    // vector<int> piles = {3,7,8,9};
    vector<int> piles = {2,6,7,8,9,3};
    Solution s;
    if(s.stoneGame(piles))
        cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
    return 0;
}