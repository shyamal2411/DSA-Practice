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

	cin >> n;
	cin.ignore();
	char arr[n + 1];
	cin.getline(arr, n);
	cin.ignore();/*flush function can also be used.*/

	i = 0;
	int st = 0, maxst = 0, currentlen = 0, maxlen = 0;

	while (1)
	{
		if (arr[i] == ' ' || arr[i] == '\0')
		{
			if (currentlen > maxlen)
			{
				maxlen = currentlen;
				maxst = st;
			}
			currentlen = 0;
			st = i + 1;
		}
		else
			currentlen++;
		if (arr[i] == '\0')
			break;

		i++;
	}
	cout << maxlen << endl;
	for (i = 0; i < maxlen; i++)
		cout << arr[i + maxst];
	return 0;
}