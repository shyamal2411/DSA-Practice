#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
using namespace std;


void dec(int n)
{
    if(n==0)
    return;

    cout<<n<<endl;
    dec(n-1);
}
int main(){
  int n;
  cin>>n;
  dec(n);
  return 0;  
}