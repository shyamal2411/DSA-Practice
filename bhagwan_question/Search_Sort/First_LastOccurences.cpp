#include <bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n, int x);

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    int arr[n], i;
    for (i = 0; i < n; i++)
      cin >> arr[i];
    vector<int> ans;
    ans = find(arr, n, x);
    cout << ans[0] << " " << ans[1] << endl;
  }
  return 0;
}

vector<int> find(int arr[], int n, int x) {

  int first = -1, last = -1;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    if (arr[i] == x && first == -1) {
      first = i; //jo element required x hoy ane first =-1 hoy, matlab hji sudhi aa element madyo nthi to 
      // first ne aa place prr fix karo.
    }
    if (arr[i] == x && first != -1) {
      last = i;  //jo first, -1 position prr na hoy, matlab element ek vaar madi gayo che to last ne aa particular place prr lai jao

    }
  }
  v.push_back(first);// last ma bnne ne push kari do.
  v.push_back(last);

  return v; // vector function che atle vector ne return karavo.
}