#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long

/*Problem statement not yet clear, just learning sorting from this solution.*/
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll int a[5], n, i, p, q, count = 0, j, t, temp;

	fo(i, 4)
	{
		cin >> a[i];
	}
	sort(a, a + 4);/*Selection sort, sorting the elements from a to a+4 in ascending order*/
	for (i = 0; i < 3; i++)
	{
		if (a[i] == a[i + 1]) //if there are same elements then add to count.
			count ++;
	}
	cout << count;
	return 0;
}