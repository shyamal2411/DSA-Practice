#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int n, k, t, i, p, q, r, s, count = 0, j, flag = 0, ans = 0;
  cin >> t;
  while (t--) {
    cin >> n;
    ll int count1 = 0, count2 = 0, sum = 0;

    fo(i, n) {
      cin >> p;
      if (p == 1) {
        count1++;
      } else {
        count2++;
      }
      sum += p;
    }

    if ((count1 % 2 == 0 && count2 % 2 == 0) ||
        (count1 > 1 && count1 % 2 == 0)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  //  cin>>t;
  //     while (t--)
  //     {
  //         cin>>n;
  //         int a[n];
  //         fo(i,n)
  //         {cin>>a[i];}

  //         fo(i,n)
  //         {
  //             flag+=a[i];
  //         }
  //         ans=flag%2;

  //         if(flag%2==0)
  //         {
  //             if(ans%2!=0)
  //             {cout<<"YES"<<endl;}

  //         }
  //         cout<<"NO"<<endl;
  //     }

  return 0;
}