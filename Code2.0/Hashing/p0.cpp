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
    vi ans = {10, 20, 20, 10, 10, 20, 5, 20};
    int n = ans.size();
    unordered_map<int, int> mp;
    for (auto i : ans)
        mp[i]++;

    for (auto i : mp)
    {
        cout << i.first << " " << i.second << nl;
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