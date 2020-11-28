#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long int n;
	int k;
	cin >> n >> k;

	for (int i = 0; i < k; i++)
	{
		if (n % 10 !=  0) {
			n--;
		}
		else
			n /= 10;
	}
	cout << n;
}