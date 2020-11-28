#include<iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, i, j, temp = 0;

	cin >> n;
	int arr[n];
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i]) /*To get the descending sorted array,son't write this if condition.*/
				swap(arr[j], arr[i]);
		}
	}
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";

	cout << endl;
	return 0;
}