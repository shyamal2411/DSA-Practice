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
}

int32_t main()
{
    FIO int t;
    t = 1;
    in t;
    while (t--)
    {
        int count = 0, prime = -1;
        string str;
        cin >> str;

        if (str.size() == 1)
        {
            cout << "No\n";
            continue;
        }
        for (int i = 0; i <= str.size(); i++)
            if (str[i] == '1')
            {
                count++;
                prime = i + 1;
            }
        if (count == 0 || (count == 1 && prime == str.size()))
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }

    return 0;
}