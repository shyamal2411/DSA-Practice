#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	long long int n;
	int a = 0, d = 0;
	cin >> n;
	char arr[n];
	// string s;
	// cin >> s;
	// cout << s;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] == 'A')
			a++;
		if (arr[i] == 'D')
			d++;
	}
	if (d == a)
		cout << "Friendship";
	else if (a > d)
		cout << "Anton";
	else if (d > a)
		cout << "Danik";

	return 0;
}