#include <bits/stdc++.h>
using namespace std;
int MAXN = 1000000;
int MOD = 998244353;
int T, L, R;
vector<vector<int>> divisors(MAXN + 5);
vector<int> f(MAXN + 5, 0);
vector<int> temp(MAXN + 5, 0);

void findDivisors() {
    for (int i = 1; i <= MAXN; i++)
        for (int j = i; j <= MAXN; j += i) divisors[j].push_back(i);
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    findDivisors();
    // for (int i = 1; i <= 10; i++) {
    //     cout << i << ": " << " ";
    //     for (int j = 0; j < divisors[i].size(); j++) cout << divisors[i][j] << " ";
    //     cout << endl;
    // }
    
    for (int i = 2; i <= MAXN; i++) {
        if (divisors[i].size() == 2) {
            f[i] = 1;
            continue;
        } else {
            long long ans = 0;
            int d = 1;
            while (divisors[i][d] <= (i / divisors[i][d])) {
                ans += ((((long long)divisors[i][d] * f[i / divisors[i][d]]) % MOD) + (((long long)(i / divisors[i][d]) * f[divisors[i][d]]) % MOD)) % MOD;
                d++;
            }
            f[i] = ans;
        }
    }
    // for (int i = 1; i <= MAXN; i++) cout << i << ": " << f[i] << endl;

    for (int i = 1; i <= MAXN; i++) {
        if (divisors[i].size() == 2) {
            temp[i] = 1;
            continue;
        } else {
            long long ans = 0;
            for (int j = 0; j < divisors[i].size(); j++)
                ans = (ans + f[divisors[i][j]]) % MOD;
            temp[i] = ans;
        }
    }

    for (int i = 1; i < MAXN; i++) temp[i] = (temp[i] + temp[i - 1]) % MOD;
    // for (int i = 1; i <= MAXN; i++) cout << i << ": " << temp[i] << endl;

    cin >> T;
    while (T--) {
        cin >> L >> R;
        cout << (temp[R] - temp[L - 1] + MOD) % MOD << endl;
    }
    return 0;
}