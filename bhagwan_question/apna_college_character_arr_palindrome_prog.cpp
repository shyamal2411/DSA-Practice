#include<bits/stdc++.h>
using namespace std;

/*CODE WORKS PERFECT,THERE'S SOME ISSUE IN SUBLIME*/
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output3.txt", "w", stdout);
#endif
	int n, i, p, q, count = 0, j, t, temp;
	cin >> n;
	char arr[n + 1];
	cin >> arr;

	bool check = 1;
	for (i = 0; i < n; i++)
	{
		if (arr[i] != arr[n - 1 - i])
		{
			check = 0;
			break;
		}
	}

	if (check == true) {
		cout << "Palindrome" << endl;
	}

	else {
		cout << "Not" << endl;
	}
	return 0;
}
