#include<stdio.h>
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
/*INSERTION SORT*/
int main()
{
	int n, i, p, q, count = 0, j, t, temp;
	scanf("%d",&n);
	int arr[n], current;
	for(i=0;i<n;i++)
				scanf("%d",&arr[i]);

	for (i = 1; i < n; i++)
	{
		current = arr[i];
		j = i - 1;

		while (arr[j] > current && j >= 0)
		{
			arr[j + 1] = arr[j];
			j--;

		}		arr[j + 1] = current;
	}

for(i=0;i<n;i++)
		printf("%d\t",arr[i]);

	printf("\n");
	return 0;
}
