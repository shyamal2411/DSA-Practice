#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
using namespace std;
        /*---UPSOLVING---*/
#define int long long 
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<
//to get gcd 
int gcd(int a, int b)
{
    if(b==0) {return a;}

    else{
    return(gcd(b,a%b));}
}

/*to  breakdown number for comparing in gcd*/
int dividenums(int n)
{
    int ans=0;
    while (n)
    {
        ans+= n%10;
        n/=10;
    }
    return ans;    
}

void solve(){
int n,k,t,i,p,q,r,s,count=0,j,flag;
  cin>>n;
  while(gcd(n,dividenums(n))==1)
  n++;

  cout<<n<<endl;
}
/*
The brute approach is to divide number, go on adding it, place the summation of it 
in the solve function then compare it with n, if gcd of both is equal to one means no further factor is possible
therefore run the loop with that condition & go on incrementing n,when gcd becomes equal to 1, stop & print n.
*/

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    t=1;
    in t;
    while(t--){
        solve();  
    }    
}
