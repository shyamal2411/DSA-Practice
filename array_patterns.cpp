#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, i, p, q, count = 0, j, t, temp;

	n = 5;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			cout << " ";
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			cout << "*";

		}
		cout << endl;
	}
	/*ABOVE WAS STRICTLY FOR THE UPPER LOOP,
	BELOW IS FOR THE LOWER PART OF STAR*/

	for (i = n; i >= 1; i--)
	{
		for (j = 1; j <= n - i; j++)
		{
			cout << " ";
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

}
