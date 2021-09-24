#include<bits/stdc++.h> 
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
   int a,n,i,t,count=0,j;

    /*THE LAST BIT OF ODD NUMBERS IS ALWAYS 1 WHILE THE LAST BIT OF EVEN NUMBERS IS ALWAYS 0.
    kEEP THIS IN MIND TO USE BITWISE OPERATIONS.*/
    cin>>a;

    if(a&1){
    cout<<"Number is odd"<<endl;}
    else{
    cout<<"Number is even"<<endl;}
return 0;
}