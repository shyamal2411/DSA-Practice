// Iterative C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;

/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

/* Utility function to print an array */
void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

	cout << endl;
}


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {1, 2, 3, 4, 5, 6};

	int n = sizeof(arr) / sizeof(arr[0]);

	rvereseArray(arr, 0, n - 1);

	cout << "Reversed array is" << endl;


	printArray(arr, n);
	cout << endl << "Length of the array is:" << sizeof(arr) / sizeof(arr[0]);
	return 0;
}
/*#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	int i;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
    cout<<"Reversed Array is :"<<endl;
	for (i = n - 1; i >= 0; i--)
	{
		cout<<arr[i]<<" ";
	}
	cout << endl;
	return 0;

}*/