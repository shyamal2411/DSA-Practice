#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	long long int t, a, b;
	cin >> t;
	int x = 4;
	cout << endl;
	while (t--)
	{
		cin >> a >> b;
	}
	while (t--)
	{
		cout << a^x + b^x;
	}
}