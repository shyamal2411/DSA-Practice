#include<stdio.h>
#include<stdlib.h>
int factorial(n);
int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int n, m;
	scanf("%d", &n);
	m = (2 * factorial(n)) / (n * n);
	printf("%d\n", m);
}

int factorial(int n)
{
	// single line to find factorial
	return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}