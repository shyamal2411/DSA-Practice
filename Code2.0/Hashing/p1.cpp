#include <bits/stdc++.h>
using namespace std;

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
    vi vec = {2, 7, 11, 15};
    vi ans;
    int target = 9;
    int n = vec.size();
    unordered_map<int, int> mp;
    // for (auto i : vec)
    //     mp[i]++;

    for (int i = 0; i < n; i++)
    {
        if (mp.find(target - vec[i]) != mp.end())
        {
            ans.push_back(mp[target - vec[i]]);
            ans.push_back(i);
            break;
        }
        mp[vec[i]] = i;
    }

    for (auto i : ans)
        cout << i << " ";
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