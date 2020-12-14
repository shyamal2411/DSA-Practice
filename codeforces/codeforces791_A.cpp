#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n = 0, a, b;

	cin >> a >> b;

	while (a <= b) {
		n++;
	}
	cout << n << endl;
}