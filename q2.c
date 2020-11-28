/* structure is used to return two values from minMax() */
#include<stdio.h>
struct pair
{
	int min;
	int max;
};

struct pair getMinMax(int arr[], int n)
{
	struct pair minmax;
	int i;

	/*If there is only one element then return it as min and max both*/
	if (n == 1)
	{
		minmax.max = arr[0];//bnne ne 0 index assign kari,max ane min ne
		minmax.min = arr[0];
		return minmax;
	}

	/* If there are more than one elements, then initialize min
		and max*/
	if (arr[0] > arr[1])
	{
		minmax.max = arr[0];/*hve jo 0th index bigger hoy to max ne 0th ane min ne 1 assign,baki vice versa*/
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

/* Driver program to test above function */
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {1000, 11, 445, 2, 330, 2000};
	int arr_size = 6;
	struct pair minmax = getMinMax (arr, arr_size);//aiya assign karvu pde struct so function work kare
	printf("\nMinimum element is %d", minmax.min);
	printf("\nMaximum element is %d", minmax.max);
	getchar();
}
