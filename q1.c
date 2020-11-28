#include<stdio.h>
#include<stdlib.h>

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	// int n;
	// scanf("%d", &n);
	// int a[n];
	// while (n--)
	// {
	// 	scanf("%d", &a[n]);
	// }
	// while (n--)
	// {
	// 	printf("%d", a[n]);
	// }

//fill the code;
// int n;
// scanf(“%d”, &n);
// int arr[n];
// int i;
// for (i = 0; i < n; i++)
// {
// 	scanf(“% d”, &arr[i]);
// }
// C program to reverse an array

int main()
{
	//fill the code;
	int n;
	scanf(“% d”, &n);
	int arr[n];
	int i;
	for (i = 0; i < n; i++)
	{
		scanf(“% d”, &arr[i]);
	}
	printf(“Reversed array is
		   :\n”);
	for (i = n - 1; i >= 0; i–)
	{
		printf(“% d\n”, arr[i]);
	}
	return 0;
}
