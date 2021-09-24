#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int k, t, i, p, q, s, j;
  double count = 0, n, r = 0.75;
  string str;
  cin >> t;
  while (t--) {
    cin >> n;
    cin >> str;
    count = 0;

    fo(i, n) {
      if (str[i] == '0') {
        count++;
      }
    }

    if (120 - count >= 0.75 * (120)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}

/*
Editorial Solution:
#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long int n,i,t;
  cin>>t;
  while(t--)
  {
    int n,count=0;
    cin>>n;
    string b;
    cin>>b;
    for(i=0;i<n;i++)
    {
      if(b[i]='0')
      count++;
    }
    if(count>30)
    cout<<"NO\n";
    else
    cout<<"YES\n";
    }
}
*/