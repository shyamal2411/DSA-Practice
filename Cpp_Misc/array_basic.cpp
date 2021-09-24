#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char a[] = "ADIT2020";
	char *p = a;

	cout << p + p[2] - p[1] << endl;
	return 0;

}