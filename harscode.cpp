#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll int n, k, t, i, p, q, r, s, counts, count, j, x;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n];
        fo(i, n)
        {cin >> arr[i];}

        sort(arr, arr + n, greater<int>()); /*Sorting in descending manner*/
        int arr1 = 0;/*for 2 dishes,2 arrays*/
        int arr2 = 0;
        arr1 = arr[0];
        for (i = 1; i < n; i++) {
            if (arr2 <= arr1) {arr2 += arr[i];}/*the largrst element in the sorted array takes highest time,so if it is greater*/
            else {arr1 += arr[i];}
        }
        cout << max(arr1, arr2) << endl;
    }
}
