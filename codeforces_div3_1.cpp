#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int t;
	long long int n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		if (n < 10)
		{
			cout << 10 * (n - 1) + 1 << endl;
		}
		if (n < 100 && n > 10)
		{
			cout << 10 * (n / 10 - 1) + 3 << endl;
		}
		if (n < 1000 && n > 100)
		{
			cout << 10 * (n / 100 - 1) + 6 << endl;
		}
		if (n < 1000 && n > 1000)
		{
			cout << 10 * (n / 1000 - 1) + 10 << endl;
		}
	}
}