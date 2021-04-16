#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

#define int long long 
#define nl endl
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<
#define first fr
#define second sc

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin.tie(0); cout.tie(0);
    
    int t,n;
    in n>>t;
    string s;cin>>s;
    while(t--){
        f(i,0,n-1){
                if(s[i]=='B' && s[i+1]=='G')
                {swap(s[i],s[i+1]); i++;}
        }
    }    
    cout<<s<<endl;
    return 0;
}