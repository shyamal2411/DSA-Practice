#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int i, n, k, count = 0, a[50];
  cin >> n >> k;
  for (i = 0; i < n; i++)
  {
    cin >> a[i];

    if (a[i] >= a[k - 1] && a[i] > 0)
      count++;
  }
  cout << count << endl;

  return 0;
}