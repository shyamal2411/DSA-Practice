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
	cin >> n >> endl >> m >> endl;
	for (int i = 0; i < n.size(); i++)
	{
		if (n[i] == m[i])
			cout << 1;
		else
			cout << 0;
	}
}