#include<bits/stdc++.h> 
using namespace std;

#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll int n,k,t,i,p,q,r,s,count=0,j;
    cin >> t;
    while (t--) {
      cin >> n;
      ll int arr[102] = {0};

      fo(i, n) {
        cin >> p;
        arr[p]++;
      }

      sort(arr, arr + 102, greater<ll int>());

      cout << arr[0] << endl;
    }
return 0;
}