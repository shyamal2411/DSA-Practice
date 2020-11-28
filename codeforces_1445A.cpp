#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	ll int n, i, p, q, x, count = 0, j, t, temp;
	//std::vector<int> b;
	cin >> t;
	//cout << endl;
	while (t--)
	{
		cin >> n >> x;
		cout << endl;
		int a[n], b[n];
		fo(i, n)
		{
			cin >> a[i] >> b[i];
		}
		sort(a, a + n);
		sort(b, b + n, greater<int>());
		/*sort(b, b + n);
		reverse(b.begin(), b.end());*/

		fo(i, n)
		{	int a[n], b[n];
			if (a[i] + b[i] > x)
				count = 1;
			break;	/*break because 1 vaar Count =1 thayu atle YES j print karvanu che*/
		}

		if (count == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}