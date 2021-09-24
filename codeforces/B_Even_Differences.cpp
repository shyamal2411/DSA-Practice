#include<bits/stdc++.h> 
using namespace std;

#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll int n,k,t,i,p,q,r,s,count=0,j;

 cin>>t;
  while(t--)
    {
        cin>>n;
        int arr[n],count1=0,count2=0;
        fo(i,n)
        {
            cin>>arr[i];
           
        }
        fo(i, n) {
          if (arr[i] % 2 != 0)
            count1++;
          else
            count2++;
        }
cout<<min(count1,count2)<<endl;        
    }
}