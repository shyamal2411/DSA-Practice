#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	long long int t, l, r;
	float a;

	cin >> t;
	while (t--)
	{
		cin >> l >> r;
		a = max(l, r) / 2;

		if (l > a && r > a)
			cout << "YES" << endl;

		else
			cout << "NO" << endl;
	}

}