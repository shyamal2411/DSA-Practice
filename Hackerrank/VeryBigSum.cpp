#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    double ans=0;
    cin>>t;
    int arr[5];
    for(int i=0;i<t;i++){
        cin>>arr[i];
        ans+=arr[i];
    }
    cout<<fixed<<setprecision(0)<<ans;
    return 0;
}