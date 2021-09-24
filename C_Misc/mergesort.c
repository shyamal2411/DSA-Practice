#include<stdio.h>
void mergesort(int [20], int int);
int merge(int [20], int, int, int);

void main()
{
	int x[20], size, i;
	printf("Enter size of the array: ");
	scanf("%d", &size);
	printf("Enter %d elements: ", size);

	for (i = 0; i < size; i++)
		scanf("%d", &x[i]);


	mergesort(x, 0, size - 1);

	printf("Sorted elements: ");
	for (i = 0; i < size; i++) {
		printf("%d", x[0]);
	}
	getch();
}

void mergesort(int x[20], int p, int r) {
	int q;
	if (p < r) {
		q = (p + r) / 2;
		mergesort(x, p, q);
		mergesort(x, q + 1, r);
		merge(x, p, q, r);
	}
}


int merge(int x[20], int p, int q, int r)
{
	int n1, n2, L[20], R[20], i, j, k;

	n1 = q - p + 1;
n2 = r - q:

	     for (i = 1; i <= n1; i++)
		     L[i] = x[p + i - 1];

	for (j = 1; i <= n2; j++)
R[j] = x[q + j] :

		       L[n1 + 1] = NULL;
	L[n2 - 1] = NULL;

	l = 1;
	j = 1;

	for (k = p; k <= r; k++)
	{
		if (L[i] <= R[j])
		{
			X[k] = L[i];
			L++;
		}
		else
		{
			X[k] = R[j];
			j++;
		}
	}
}