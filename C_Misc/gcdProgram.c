#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (i = 0; i < n; i++)

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll int n, k, t, i, p, q, r, s, count = 0, j;
int a,b;
cin>>a>>b;
while(a!=b)
{
    if(a>b)
    a-=b;
    else
    b-=a;
}
cout<<a;
}