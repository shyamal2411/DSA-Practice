#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
using namespace std;

#define ll long long 
#define fo(i,n) for(int i=0;i<n;i++)

int main(){
    ll int n,k,t,i,p,q,r,s,j;
    
    cin>>t;
    while(t--)
    {
        cin>>n;
        int f[n];
        fo(i,n)
        cin>>f[i];// these are our f(i)
        int count=f[0], fuel=f[0];
    
    for(i=1;i<n;i++)
    {
        fuel-=1; //for 1st iteration, fuel will get 0 when reaches to f[2], also the constraint starts from (2<=i)
        if(fuel>=0)
        {
            count+=f[i];// count increases as the car moves ahead and the fuel from that car gets added.
            fuel+=f[i];
        }
    }
    cout<<count<<endl;
    }//end of while
}