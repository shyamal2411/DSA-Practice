#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	int n, m;
	cin >> n;

	m = (2 * factorial(n)) / (n * n);
	cout << m;
}
int factorial(int n)
{
	// single line to find factorial
	return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}