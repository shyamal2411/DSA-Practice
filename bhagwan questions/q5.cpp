#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

void rearrange(int arr[], int n) {
  int j = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] < 0) {
      if (i != j)
        swap(arr[i], arr[j]);
      j++;
    }
  }
}
void getarr(int arr[], int n) {
  fo(i, n) cin >> arr[i];
}
void printarr(int arr[], int n) {
  fo(i, n) cout << arr[i] << " ";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll int n, i, p, q, count = 0, j, t, temp;
  cin >> n;
  int arr[n];
  getarr(arr, n);
  rearrange(arr, n);
  printarr(arr, n);
}

/*Input:
5
-1 5 -6 9 2
Output: -6 -1 2 5 9
*/