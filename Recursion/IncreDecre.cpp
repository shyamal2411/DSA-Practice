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

void inc(int n)
{
  if (n == 0)
    return;
  inc(n - 1);
  cout << n << endl;
}
int main(){
  int n;
  cin>>n;
  dec(n);
  cout<<endl;
  inc(n);
  return 0;  
}