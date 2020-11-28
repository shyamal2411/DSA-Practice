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
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		if (n < 10)
		{
			cout << 10 * (n - 1) + 1 << endl;
			/*10*(1-1) +1
			= 1 output*/

		}

		if (n < 100 && n > 10)
		{
			cout << 10 * (n / 10 - 1) + 3 << endl;
			/*10*(22/10)-1+3
			= 10(2-1)+3
			= 10+3
			=13*/

		}

		if (n < 1000 && n > 100)
		{
			cout << 10 * (n / 100 - 1) + 6 << endl;
			/*10*(777/100)-1 +6
			= 10*(6) +6
			=60 +6
			=66*/
		}

		if (n < 10000 && n > 1000) {
			cout << 10 * (n / 1000 - 1) + 10 << endl;
			/*10*(9999/1000) -1 +10
			=10(9-1)+10
			=80+10
			=90*/
		}
	}
}