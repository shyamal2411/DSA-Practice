#include<bits/stdc++.h> 
using namespace std;
int f[51];

int fibo(int n){
    if(n<=1){
    return n;}

    if(f[n]!=-1){
    return f[n];} 

    f[n]=fibo(n-1)+fibo(n-2);
    return f[n];
}

int main(){

for(int i=0;i<51;i++){
f[i]=-1;}

int n;
cin>>n;
int result = fibo(n) ;
cout << result << endl;
return 0;
}