#include<bits/stdc++.h> 
using namespace std;

#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll int n,k,t,i,p,q,r,s,count=0,j,flag;

 cin>>t;
 while(t--)
 {
    cin>>n;
    count=n;
    ll int arr[27]={0}; //for all the alphabets
    while(count--)
    {
        string s;
        cin>>s;
        for(i=0;i<s.length();i++)
        {
            arr[int (s[i]- 'a')]++;
        }
    }
    flag=0;
    fo(i,27)
    {
        if(arr[i]%n)
        flag=1;
    }
    if(flag==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
 }   
return 0;
}