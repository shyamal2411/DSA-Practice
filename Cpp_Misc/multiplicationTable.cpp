#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n,m,ans = 0;
   //program for multiplication table
    cin>>n>>m;
    for(int i = 1; i <= m; i++){
        // ans += n*i;
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}