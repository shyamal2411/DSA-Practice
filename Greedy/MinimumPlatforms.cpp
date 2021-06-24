// https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1#

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl "\n"
const int M = 1e9 + 7;
typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
#define read(arr, n)          \
  for (int i = 0; i < n; i++) \
    cin >> arr[i];
#define pr(arr, n)            \
  for (int i = 0; i < n; i++) \
    cout << arr[i];
#define in cin >>
#define out cout <<
#define first fr
#define second sc
class Solution {
 public:
  int findPlatform(int arr[], int dep[], int n) {
    sort(arr, arr + n);
    sort(dep, dep + n);

    int maxPlat = 1, res = 1, i = 1, j = 0;

    while (i < n && j < n) {
      if (arr[i] <= dep[j]) {
        maxPlat++;
        i++;
      } else if (arr[i] > dep[j]) {
        maxPlat--;
        j++;
      }
      if (maxPlat > res)
        res = maxPlat;
    }
    return res;
  }
};

int32_t main() {
  int n;
  cin >> n;
  int arr[n], dep[n];
  read(arr, n);
  read(dep, n);
  Solution m;
  cout << m.findPlatform(arr, dep, n);
  return 0;
}