#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s, t;
	cin >> s;  cin >> t;
	reverse(t.begin(), t.end());//learned this function first,as being new to C++,didn't know how to use this function
	if (s == t)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}