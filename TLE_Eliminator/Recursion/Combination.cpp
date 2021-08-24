#include<bits/stdc++.h> 
using namespace std;

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/T
typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];


int combination(int n, int r)
{
    if(n==0 || r==0)
    return 1;
return combination(n-1,r-1)+ combination(n-1,r);
}

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

int main(){
int n,r;
cin>>n>>r;
cout<<combination(n,r);
return 0;
}