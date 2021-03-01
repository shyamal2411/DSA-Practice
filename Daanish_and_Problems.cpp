#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f(i, a, n) for (int i = a; i < n; i++)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];
#define in cin >>
#define out cout <<

void solve() {
  int arr[10];
for(int i = 0; i < 10; i++)
{
    cin>>arr[i];
}
   int count1 = 0;
  int k, sum=0;
  cin >> k;
  for (int i = 9; i >= 0; i--) {
    sum -= arr[i];
    if (sum <0) {
      cout << i + 1 << endl;
      break;
    } 
    else if (sum == 0) {
        i--;
        while(arr[i]==0) 
        {
            i++;
            }
        cout<< i+1 <<endl;
        break;
     }
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin.tie(0);
  cout.tie(0);

  int t;
  t = 1;
  in t;
  while (t--) {
    solve();
  }
}