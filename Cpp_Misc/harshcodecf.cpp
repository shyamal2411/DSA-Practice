#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

#define ll long long
#define f(i,n) for(i=0;i<n;i++)
#define PI 3.1415926535897932384626433832

ll int gcd(ll int a, ll int b) {
    if (b == 0) {return a;}
    else {return gcd(b, a % b);}
}

ll int lcm(ll int a, ll int b) {
    return (a * b) / (gcd(a, b));
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll int n, k, t, i, p, q, r, s, counts, flag, j;

    cin >> t;
    while (t--) {
        cin >> n;
        counts = 0;
        i = 2 * n;
        while (counts != n) {
            cout << i << ' ';
            counts ++;
            i += 2;
        }
        cout << endl;

    }
}