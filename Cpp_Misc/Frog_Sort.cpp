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

      ll int arr[n], jump[n], position[n];
      vector<pair <ll int, ll int>> vec1;

      fo(i, n) {
        cin >> arr[i];
        vec1.push_back(make_pair(arr[i], i));
      }

      fo(i, n)
     cin >> jump[i]; 
      

      vector<pair<ll int, ll int>> vec;

      fo(i, n) 
      {
           vec.push_back(make_pair(arr[i], jump[i]));
      }

      sort(vec.begin(), vec.end());
      sort(vec1.begin(), vec1.end());

      ll int ans = 0;

      for (i = 1; i < n; i++) {
        while (vec1[i].second <= vec1[i - 1].second) {
          ans++;
          vec1[i].second += vec[i].second;
        }
      }

      cout << ans << endl;
    }
return 0;
}