#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int ans = 0;
	int t, x, y;
	cin >> t;
	while (t--)
	{
		cin >> x >> y;
		cout << (x ^ y) << endl;
	}
	return 0;
}