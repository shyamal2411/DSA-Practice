#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/counting-frequencies-of-array-elements/?ref=lbp
#define int long long
#define nl "\n"
const int M = 1e5 + 5;
typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cin.tie(0);                       \
    cout.tie(0);
#define read(arr, n)            \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];
#define pr(arr, n)              \
    for (int i = 0; i < n; i++) \
        cout << arr[i];
#define in cin >>
#define out cout <<
#define umap unordered_map<int, int> mp
#define input \
    int n;    \
    cin >> n;
#define inmap         \
    for (auto i : mp) \
        mp[i]++;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (auto i : arr)
    {
        mp[i]++;
    }
    for (auto i : mp)
        cout << i.first << " " << i.second << nl;
}

int solve1()
{
    int n;
    cin >> n;
    vi arr(n);
    read(arr, n);
    map<int, int> mp1;
    sort(arr.begin(), arr.end());
    for (auto i : arr)
    {
        mp1[i]++;
    }
}

int32_t main()
{
    FIO int t;
    t = 1;
    // in t;
    while (t--)
        solve();

    return 0;
}