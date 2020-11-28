#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
/*INSERTION SORT*/
/*This program is fully working, output may not come due to sublime,otherwise its fully functioning.*/
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, i, p, q, count = 0, j, t, temp;

	cin >> n;
	int arr[n], current;

	fo(i, n)
	cin >> arr[i];


	for (i = 1; i < n; i++)
	{
		current = arr[i]; /*ith element ne current banavi devano*/
		j = i - 1;/*swapping ni process ne aagad vadharva j ni value decrement,so aagad chaale loop.*/

		while (arr[j] > current && j >= 0)
		{
			arr[j + 1] = arr[j];/*jo aa ith element current karta moto hoy
		to next atle j+1 ne j assign kari devano*/
			j--; /*part of loop,jem for loop ma i++, kariye m*/

		}		arr[j + 1] = current;/*sorting aagad vadharva, j+1 ne current kari again same process*/
	}

	fo(i, n)
	cout << arr[i] << " " ;

	cout << endl;
	return 0;
}
