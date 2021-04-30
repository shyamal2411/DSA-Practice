#include<bits/stdc++.h>
using namespace std;
int i;
#define fo(i,n) for(i=0;i<n;i++)

int  getarr(int arr[], int n)
{
	fo(i, n)
	cin >> arr[i];
}/*To get the array*/

int printarr(int arr[], int n)
{
	fo(i, n)
	cout << arr[i] << "  ";
} /*To print the given elements in the array*/


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, i, p, q, count = 0, j, t, temp;
	int count0 = 0 , count1 = 0 , count2 = 0;

	cin >> t >> n;
	int getarr(arr[n], n);
	int printarr(arr[n], n);

}

//int zerocounter = 0, onecounter = 0, twocounter = 0;

// cin >> t >> n;
// int arr[n];

// while (t--)
// {
// 	fo(i, n)
// 	cin >> arr[i];

// 	fo(i, n)
// 	{
// 		if (arr[i] == 0)
// 			zerocounter++;
// 		else if (arr[i] == 1)
// 			onecounter++;
// 		else if (arr[i] == 2)
// 			twocounter++;
// 	}
// 	while (zerocounter > 0)
// 	{
// 		arr[i++] = 0;
// 		zerocounter--;
// 	}
// 	while (onecounter > 0)
// 	{
// 		arr[i++] = 1;
// 		onecounter--;
// 	}
// 	while (twocounter > 0)
// 	{
// 		arr[i++] = 2;
// 		twocounter--;
// 	}
// 	fo(i, n)
// 	{
// 		cout << arr[i] << "  ";
// 	}
// }