#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/candy/
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size(), ans=0;
        vector<int> lr(n, 1), rl(n, 1);
        for(int i = 1; i < n; i++){
            if(ratings[i-1] < ratings[i])
                lr[i] = lr[i-1]+1;
        }
        for(int i = n-2; i >= 0; i--){
            if(ratings[i] > ratings[i+1])
                rl[i] = rl[i+1] +1;
        }
        for(int i = 0; i<n; i++)
            ans+=max(lr[i], rl[i]);
        
        return ans;
    }
};
   /*
ratings[] = 12 4 3 11 34 34 1 67
l2r[] =      1 1 1 1  1  1  1 1 
l2r[] =      1 1 1 2  3  1  1 2 

ratings[] = 12 4 3 11 34 34 1 67
r2l[] =      1 1 1 1  1  1  1 1 
r2l[] =      3 2 1 1  1  2  1 1 

l2r[] =      1 1 1 2 3 1 1 2 
r2l[] =      3 2 1 1 1 2 1 1 
ans = max(l2r,r2l) = 3+2+1+2+3+2+1+2=16
    */

int main(){
        Solution s;
        vector<int> ratings = {1,2,2};
        cout<<s.candy(ratings)<<endl;
        return 0;
}