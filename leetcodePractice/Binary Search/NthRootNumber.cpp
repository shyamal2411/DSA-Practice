#include <bits/stdc++.h>
using namespace std;

// https://takeuforward.org/data-structure/nth-root-of-a-number-using-binary-search/
double multiply(double num, int n)
{
    double ans = 1.0;
    for (int i = 0; i < n; i++)
    {
        ans *= num;
    }
    return ans;
}

double getnthroot(int n, int m)
{
    double low = 1;
    double high = n;
    double epsilon = 1e-6; // epsilon is the accuracy = 0.000001

    while ((high - low) > epsilon)
    {
        double mid = (low + high) / 2;
        if (multiply(mid, n) < m)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    return low;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << getnthroot(n, m);
    return 0;
}

/*
Take 27 as number and we need to find 3rd root.
now any root would only lie between 1 and 27 only.
so we need to find the root between 1 and 27.
so to find any root, go on dividing the number by root and check if it is greater than root or less than root.
if the multiplication of that middle number is greater than the actual number i.e. 27
then we need to decrease our mid, else increase our mid if our mid number is smaller
This way by going on dividing the mid, we find the root.
Our while here has high-low in place of low<high, because our difference between high and low should be greater than epsilon.
epsilon because max difference required in 10^(-6). So, difference should always be greater than epsilon.
*/
