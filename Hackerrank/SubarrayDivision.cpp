#include<bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/challenges/the-birthday-bar/problem
int n,d,m, a[105], s[105], ans;

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s[i]= s[i-1]+a[i];
    }
    cin>>d>>m;

    for(int i=m;i<=n;i++){
        if(s[i]-s[i-m]==d)
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}