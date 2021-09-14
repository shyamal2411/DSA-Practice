#include <bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
#define int long long
#define nl "\n"
const int M = 1e9 + 7;
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
    int n, k, i, p, q, r, count = 0, j, flag, ans = 0;
    in n;
    vi score(n);
    read(score, n);
    int ma = score[0], mi = score[0];
    int counta = 0, countb = 0;
    f(i, 1, n)
    {
        if (score[i] > ma)
        {
            ma = score[i];
            counta++;
        }
        if (score[i] < mi)
        {
            mi = score[i];
            countb++;
        }
    }
    cout << counta << " " << countb << nl;
}

int32_t main()
{
    FIO int t;
    t = 1;
    //in t;
    while (t--)
        solve();

    return 0;
}