#include<bits/stdc++.h>
using namespace std;

//UPSOLVED
// https://www.codechef.com/START13C/problems/ADDNDIV
vector<int> primeFactor(int n)
{
    vector<int> pfact;
    while(n%2==0)
    {
        pfact.push_back(2);
        n/=2;
        }
    for(int i=3;i<=sqrt(n);i+=2){
        while(n%i==0){
        pfact.push_back(i);
        n=n/i;
    }
    }
    if(n>2) 
    pfact.push_back(n);
    return pfact;
}


int main(){
    int t; cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        vector<int> factors= primeFactor(a);
        bool poss = true;
        for(auto i: factors){
            if(b%i!=0){
                poss=false;
            }
        }
    if(poss)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
 
    }
    return 0;
}