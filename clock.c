#include<stdio.h>
#include<stdlib.h>

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int h = 0, m = 0, s = 0, i;

	printf("Please enter a time format in HH:MM:SS");
	scanf("%d%d%d", &h, &m, &s);
start:
	for (h; h < 24; h++)
	{
		for (m; m < 60; m++)
		{
			for (s; s < 60; s++)
			{

				printf("\n\n\t\t\t%d:%d:%d", h, m, s);
				if (h < 12)
				{
					printf(" AM");
				}
				else
				{
					printf(" PM");
				}
				printf("\n\n\t\t\tSunday 18 Nov 2018");
				for (double i = 0; i < 3619999; i++)
					i++;
				i--;
			}
			s = 0;
		}
		m = 0;
	}
	h = 0;
	goto start;
}