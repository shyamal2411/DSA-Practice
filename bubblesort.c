#include<stdio.h>
#include<stdlib.h>
#define MAX 100
/*BUBBLE SORT C PROGRAM	*/
int main()
{
	int arr[MAX], i, j, temp, n, count = 0;
	printf("Enter number of elements: ");
	scanf("%d\n", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter elements %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	/*MAIN ALGORITHM*/
	for (i = 0; i < n - 1; i++)
	{
		count = 0;
		for (j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				count++;
			}
		}
		if (count == 0)
			break;
	}
	printf("Sorted list is: \n");
	for (i = 0; i < n; i++)
		printf("%d", arr[i]);

	printf("\n");
}