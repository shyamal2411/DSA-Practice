#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
#endif
    int t, n;
    cin >> t;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> n;
        cin >> arr[i];

    }
    for (int i = 0; i < n; i++)
    {
        sort(arr, arr + n);
        cout << arr[i] << " ";
    }
    return 0;
}