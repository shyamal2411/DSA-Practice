#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
using namespace std;

#define ll long long 
#define fo(i,n) for(int i=0;i<n;i++)

int main(){
    ll int n,k,t,i,p,q,r,s,count=0,j;

 set<int, greater<int>> s1;

 s1.insert(4);
 s1.insert(3);
 s1.insert(2);
 s1.insert(1);
 s1.insert(6);

 s1.insert(7);
 s1.insert(1);//no duplicates accepted.

 set<int,greater<int>>::iterator itr;
 cout<<"\n The set s1 is: \n";
 for(itr=s1.begin();itr!=s1.end();itr++)
 {
     cout<<','<<*itr;
 }
 cout<<endl;
 
 cout<< "\n s2 after removal of elements less than 30: \n";
 s2.erase(s2.begin(),s2.find(3));
 for(itr=s2.begin();itr!=s2.end();itr++)
 {
     cout<<','<<*itr;
 }
 
}