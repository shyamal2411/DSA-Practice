#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll int n, i, p, x, q, count , j, t, temp;
	cin >> t;
	while (t--) {
		cin >> n >> x;
		ll int a[n];
		ll int b[n];
		count = 0;
		fo(i, n) {
			cin >> a[i];
		}

		fo(i, n) {
			cin >> b[i];
		}

		sort(b, b + n);
		sort(a, a + n, greater<int>());

		fo(i, n) {
			if (a[i] + b[i] > x) {
				count = 1;
				break;/*break because 1 vaar Count =1 thayu atle YES j print karvanu che*/
			}
		}

		if (count == 0) {cout << "YES" << endl;}
		else {cout << "NO" << endl;}
	}
}