#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll int n, i, p, q, count = 0, j, t, temp;

	int mx = -19999;
	cin >> n;
	int a[n];
	fo(i, n)
	{
		cin >> a[i];
	}

	fo(i, n)
	{
		mx = max(mx, a[i]);
		cout << mx << endl;
	}
	return 0;
}