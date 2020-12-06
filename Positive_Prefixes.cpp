// #include <bits/stdc++.h>
// #include <algorithm>
// #include <string>
// using namespace std;

// #define ll long long
// #define fo(i, n) for (int i = 0; i < n; i++)

// int main() {
//   ll int n, k, t, i, p, q, r, s, sum = 0, j;

//   cin >> t;
//   while (t--) {
//     cin >> n >> k;
//     int a[n];
//     for (i = 0; i < n; i++) {
//       if (k == 0 || k == n)
//         break;
//       if (sum + 1 < i + 1 && k > 0) {
//         a[i] = i;
//         sum += i;
//         k--;
//         continue;
//       }
//       if (sum > i) {
//         a[i] = -i;
//         sum += i;
//         i++;
//         if (sum > 0)
//           k--;
//         continue;
//       }
//       if (sum + 1 > i + 1 && k == 1) {
//         a[i] = -i;
//         i++;
//         if (sum - i > 0)
//           break;
//         else {
//           sum -= i;
//           continue;
//         }
//       }
//       if (sum + i > i + 1 && k > 1) {
//         a[i] = i;
//         if (sum > 0)
//           k--;
//         sum += i;
//         i++;
//       }
//     }
//     if (k == n) {
//       fo(i, n) a[i] = i;
//     } else if (i <= n) {
//       fo(i, n) a[i] = -i;
//     }
//     fo(i, n) cout << a[i] << " ";
//     cout << endl;
//   }
//   return 0;
// }