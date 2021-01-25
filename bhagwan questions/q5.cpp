#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long

void rearrange(int arr[], int n)
{
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			if (i != j)
				swap(arr[i], arr[j]);
			j++;
		}
	}
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll int n, i, p, q, count = 0, j, t, temp;

  cin >> n;
  int arr[n];
  for (i = 0; i < n; i++)
    cin >> arr[i];
  rearrange(arr, n);

  for (i = 0; i < n; i++)
    cout << arr[i] << " ";
}

/*Input:
5
-1 5 -6 9 2

Output: -6 -1 2 5 9
*/