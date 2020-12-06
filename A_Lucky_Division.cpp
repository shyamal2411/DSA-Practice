#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
using namespace std;
//right approach, the previous approach didn't satisfy the Hidden test case no.8
#define ll long long 
#define fo(i,n) for(int i=0;i<n;i++)

int main(){
    ll int n,k,t,i,p,q,r,s,count=0,j;
    cin>>n;
    
    bool flag=0;
    int arr[12]={4,7,47,74,44,444,777,477,774,474,447,744}; //didn't know this method, as not aware abt hidden test cases.
   for(i=0;i<12;i++)
   {
       if(n%arr[i]==0){
           flag=true;
       }
   }
   if(flag)
    cout<<"YES";

    else
    cout<<"NO";
}