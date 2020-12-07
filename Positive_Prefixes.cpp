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
//     int arr[n]; //making array to store elements
//     while (n--) {
//       if (k == 0 || k == n) 
//         break;
//       if (sum + 1 < i + 1 && k > 0) {
//         arr[i] = i;
//         sum += i;
//         k--;
//         continue;
//       }
//       if (sum > i) {
//         arr[i] = -i;
//         sum += i;
//         i++;
//         if (sum > 0)
//           k--;
//         continue;
//       }
//       if (sum + 1 > i + 1 && k == 1) {
//         arr[i] = -i;
//         i++;
//         if (sum - i > 0)
//           break;
//         else {
//           sum -= i;
//           continue;
//         }
//       }
//       if (sum + i > i + 1 && k > 1) {
//         arr[i] = i;
//         if (sum > 0)
//           k--;
//         sum += i;
//         i++;
//       }
//     }
//     if (k == n) {
//       for (i = 0; i < n; i++) {
//         arr[i] = i;
//       }
//     } else if (i <= n) {
//       for (i = 0; i < n; i++)
//         arr[i] = -i;
//     }
//   }
//   for (i = 0; i < n; i++)
//     cout << arr[i] << " ";
//   cout << endl;
//   return 0;
// }