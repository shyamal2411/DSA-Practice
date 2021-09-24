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
   ll n, m;
   cin >> n;
   ll i, a[n + 1];
   for (i = 0; i < n; i++) {
     cin >> a[i];
   }
   cin >> m;
   ll b[m + 1];
   for (i = 0; i < m; i++) {
     cin >> b[i];
   }
   ll v[n + 1], v1[m + 1];
   v[0] = a[0];
   for (i = 1; i < n; i++) {
     v[i] = a[i] + v[i - 1];
   }
   v1[0] = b[0];
   for (i = 1; i < m; i++) {
     v1[i] = b[i] + v1[i - 1];
   }
   sort(v, v + n);
   sort(v1, v1 + m);

   ll ans = v[n - 1] + v1[m - 1];
   ans = max(ans, max(v[n - 1], v1[m - 1]));
   if (ans > 0)
     cout << ans << "\n";
   else
     cout << 0 << "\n";
 }   
return 0;
}