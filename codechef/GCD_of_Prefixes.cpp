#include<iostream>
#include<vector> 
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

void psi() 
{

int n; cin>>n;
vi b,a; int x; bool c=true;
f(i,0,n)
{
    cin>>x; 
    b.push_back(x);
    if(i>0 && b[i-1]%b[i]!=0)
    {
        c=false;
    }
}
if(c)
{
    f(i,0,n)
     cout << b[i] << ' ';
    cout<<nl;
}
else cout << "-1\n";
}

void upsolve(){
    int n;
    cin>>n;
    int b[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    int good=1;
    for(int i=2;i<=n;i++){
        if(b[i-1]%b[i])
        good=0;
    }
    if(good){
        for(int i=1;i<=n;i++)
        cout<<b[i]<<" ";
        cout<<nl;
    }
    else
    cout<<"-1\n";
}


int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) upsolve();
  
return 0;
}