#include<bits/stdc++.h> 
using namespace std;

#define int long long 
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


int32_t main(){
    FIO int t; t=1;
    in t;
    for(int j=1;j<=t;j++)
    {
    int n,i,k,p,q,r,vowel=0,consonent=0,flag,ans=0;
    string s;
    cin>>s;
    n=s.length();
    if(n<=1){
    cout<<"Case #"<<t<<": "<<0<<endl;
        // return 0;
    }
    for(i=0;i<n;i++){ /*traversing in string to find letters are consonent or vowel*/
        if(s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U'){
            consonent++;
        }
        else{vowel++;}
    }
    cout<<"Case #"<<t<<": "<<(consonent-vowel)<<endl;
    }
return 0;
}