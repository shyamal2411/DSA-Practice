#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, i, count = 1;
	cin >> n;
	int a[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < n - 1; i++)/*If it encounters 1 1 or 0 0 magnet repels so no group can be formed
	hence it is independent group as stated in problem*/
	{
		if (a[i] != a[i + 1])
			count++;
	}
	cout << count;
	return 0;
}