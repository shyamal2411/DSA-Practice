#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <utility>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <cassert>
#define ll long long int
using namespace std;

const int M = 1e9 + 7;
long long mod(long long x) {
	return ((x % M + M) % M);
}
long long add(long long a, long long b) {
	return mod(mod(a) + mod(b));
}
long long mul(long long a, long long b) {
	return mod(mod(a) * mod(b));
}

ll bin(ll a, ll b)
{
	if (b == 0)
		return 1;
	ll  res = bin(a, b / 2);
	if (b % 2)
		return res * res * a;
	else
		return res * res;
}

ll exponentMod(ll A, ll B, ll C)
{
	if (A == 0)
		return 0;
	if (B == 0)
		return 1;

	ll y;
	if (B % 2 == 0) {
		y = exponentMod(A, B / 2, C);
		y = (y * y) % C;
	}

	else {
		y = A % C;
		y = (y * exponentMod(A, B - 1, C) % C) % C;
	}

	return (ll)((y + C) % C);
}

ll isprime(ll x)
{
	ll i, res = 1;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			res = i;
			break;
		}
	}
	return res;
}

ll gcd(ll a, ll b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

ll extended_gcd(ll a, ll b, ll& x, ll& y) {
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}
	ll x1, y1;
	ll d = extended_gcd(b, a % b, x1, y1);
	x = y1;
	y = x1 - y1 * (a / b);
	return d;
}

ll binarySearch(ll arr[], ll l, ll r, ll x)
{
	if (r >= l) {
		ll mid = l + (r - l) / 2;

		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		return binarySearch(arr, mid + 1, r, x);
	}
	return -1;
}

void solve()
{
	ll a, b, ans1, ans2;
	cin >> a >> b;
	ans1 = log2(min(a, b));
	ans2 = log2(max(a, b));
	ans2 = bin(2, ans2);
	ans1 = bin(2, ans1);
	cout << ((a ^ max(a, b)) + (b ^ max(a, b))) << endl;
}

void test_case()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	test_case();
	//solve();
	return 0;
}