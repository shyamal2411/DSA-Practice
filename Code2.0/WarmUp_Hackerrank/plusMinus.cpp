#include<bits/stdc++.h> 
using namespace std;

// https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true
#define int long long 
#define nl "\n"
const int M=1e5 + 5;
typedef vector<int> vi;
typedef vector<float> vf;
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(0);cout.tie(0);
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<
#define first fr
#define second sc

void solve(){
    int n; cin>>n;
    float pos = 0, neg = 0, zero = 0;
    vf arr(n); 
    for(int i=0;i<n;i++)
    {cin>>arr[i];
        if(arr[i] > 0){pos++;}
        else if(arr[i] < 0){neg++;}
        else if(arr[i] == 0){zero++;}
    }

    float posAns = 0, negAns = 0, zeroAns = 0; 
    posAns = pos/n, negAns = neg/n, zeroAns = zero/n;
    // cout<<setprecision(4)<<posAns;
     cout << fixed << setprecision(6) << posAns << endl;
     cout << fixed << setprecision(6) << negAns << endl;
     cout << fixed << setprecision(6) << zeroAns << endl;
}


int32_t main(){
    FIO int t; t=1;
    //in t;
    while(t--) solve();
  
return 0;
}