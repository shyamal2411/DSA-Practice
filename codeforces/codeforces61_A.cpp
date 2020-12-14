#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string n, m;
	cin >> n >> m;
	for (size_t i = 0; i < n.size(); i++)
	{
		if (n[i] == m[i])
			n[i] = '0';
		else
			n[i] = '1';
	}
	cout << n << endl;
	return 0;
}