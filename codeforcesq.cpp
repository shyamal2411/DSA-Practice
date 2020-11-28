#include<iostream>
#include<bits/stlc++.h>
using namespace std;

int main()
{
    int i;
    long long n;
    cin >> n;
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += (-1)(pow(n, n));
    }
    cout << sum;
}