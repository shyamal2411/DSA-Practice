#include<bits/stdc++.h> 
using namespace std;

// #define int long long 
#define nl "\n"
const int M=1e9+7;
typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(0);cout.tie(0);
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<
#define first fr
#define second sc

// void solve(){
// int n,k,i,p,q,r,count=0,j,flag,ans=0;
//     cin>>n;
//     vi arr(n);
//     read(arr,n);
//     map<int,int> birds;
//     for(int &b: arr)
//     birds[b]++;

//     map<int,int>::iterator tracker=birds.begin();

//     for(map<int, int>::iterator it= ++tracker; it!=birds.end(); it++){
//         if(it->second > tracker->second){tracker=it;}
//         else if(it->second == tracker->second){}
//     }
// }

void solve(){
    int n; 
    cin>>n;
    vi types(n);
    read(types,n);
    int freq[6];

    f(i,0,n)
    freq[types[i]]++;

    int mostCommon=0;
    for(int i=1;i<6;i++)
    {
        if(freq[mostCommon]<freq[i])
        {mostCommon=i;}
    }
    cout<<mostCommon;
}


int32_t main(){
    FIO int t; t=1;
    //in t;
    while(t--) solve();
  
return 0;
}