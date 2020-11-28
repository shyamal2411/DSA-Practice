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
	int a[n];
	for (i = 0; i < n; i++)
		cin >> a[i];

	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (a[i] > a[j])
				swap(a[i], a[j]);
		}
	}

	for (i = 0; i < n; i++)
		cout << a[i] << " " ;

	cout << endl;
	return 0;

	/*THE BELOW PROGRAM GIVES DESCENDING OUTPUT,DON'T KNOW WHY,SO FOLLOW THE ABOVE PROGRAM*/
	// ll int n, i, p, q, count = 0, j, t, temp;
	// //cout << "Debugging";
	// cin >> n;
	// int a[n];
	// for (i = 0; i < n; i++)
	// {
	// 	cin >> a[i];
	// }
	// int counter = 1;
	// while (counter < n - 1)
	// {
	// 	for (i = 0; i < n - counter; i++)
	// 	{
	// 		if (a[i] < a[i + 1])
	// 		{
	// 			/*temp = a[i];
	// 			a[i] = a[j];
	// 			a[j] = temp;*/
	// 			swap(a[i], a[i + 1]);
	// 		}
	// 	}
	// 	counter ++;
	// }
	// for (i = 0; i < n; i++) {
	// 	//swap(a[i], a[i + 1]);
	// 	//reverse(a + i, a);
	// 	cout << a[i] << " " ;
	// }
	// cout << endl;
	// return 0;
}