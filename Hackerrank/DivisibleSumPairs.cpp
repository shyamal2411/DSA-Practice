#include <bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                if ((arr[i] + arr[j]) % k==0)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
return 0;
}