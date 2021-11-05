#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/powx-n/
class Solution {
public:
    double myPow(double x, int n) {
       double ans=1.0;
        long long nn=n; //copy variable of n, because value of n would be manipulated in the program
        if(nn<0)
            nn*=-1; //to handle the case if n is -ve
        
        while(nn){
            if(nn%2){
                ans*=x;
                nn-=1;
            }else{
                x*=x;
                nn/=2;
            }
        }
        if(n<0)
            ans=(double)(1.0) / (double)(ans);
        return ans;
    }
};

int main(){
    Solution s;
    cout<<s.myPow(2.0,10)<<endl;
    return 0;
}