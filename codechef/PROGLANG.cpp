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
#define first fr
#define second sc

void solve()
{
    // int a,b,c,d,e,f;
    // cin>>a>>b>>c>>d>>e>>f;
    // int ans=0;
    vector<int> a(2), b(2), c(2);
    read(a, 2);
    read(b, 2);
    read(c, 2);
    int ans = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    if (a[0] == b[0] && a[1] == b[1])
    {
        cout << 1 << endl;
        return;
    }
    if (a[0] == c[0] && a[1] == c[1])
    {
        cout << 2 << endl;
        return;
    }
    else
    {
        cout << 0 << endl;
        return;
    }
}

int32_t main()
{
    FIO int t;
    t = 1;
    in t;
    while (t--)
        solve();

    return 0;
}