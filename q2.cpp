// C++ program of above implementation
#include<iostream>

using namespace std;
/*.c file of this question is also in the folder,check it for comparision of the syntax*/
struct Pair
{
	int min;
	int max;
};
/*function same as C program*/
struct Pair getMinMax(int arr[], int n)
{
	struct Pair minmax;
	int i;

	/*If there is only one element, then return it as min and max both*/
	if (n == 1)
	{
		minmax.max = arr[0];
		minmax.min = arr[0];
		return minmax;
	}

	if (arr[0] > arr[1])
	{
		minmax.max = arr[0];
		minmax.min = arr[1];
	}
	else
	{
		minmax.max = arr[1];
		minmax.min = arr[0];
	}

	for (i = 2; i < n; i++)
	{
		if (arr[i] > minmax.max)
			minmax.max = arr[i];

		else if (arr[i] < minmax.min)
			minmax.min = arr[i];
	}
	return minmax;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = { 1000, 11, 445,
	              1, 330, 3000
	            };
	int arr_size = 6;

	struct Pair minmax = getMinMax(arr, arr_size);
	//difference khali aiya printf ane cout ma j aave che,aa program ma
	cout << "Minimum element is "
	     << minmax.min << endl;
	cout << "Maximum element is "
	     << minmax.max;

	return 0;
}
