#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*READ THE TIME  COMPLEXITY OF THE PROGRAM */
int binarysearch(int arr[], int n, int key)
{
	int s = 0;
	int e = n;
	while (s <= e) {
		int mid = (s + e) / 2;

		if (arr[mid] == key)
		return mid;
		
		else if (arr[mid] > key)
		{
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}
	return -1;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int key;
	cin >> key;

	cout << binarysearch(arr, n, key) << endl;
	return 0;

}

/*TIME COMPLEXITY OF BINARY SEARCH

After 1st iteration, length of array =>n

After 2nd iteration, length of array =>n/2

After 3rd iteration, length of array =>(n/2)/2 = n/2^2

After k iteration, length of array =>n/2^k

Let the length of array become 1 after k iterations

	n/2^k =1

	n=2^k

	log2(n) = log2(2^k)

	log2(n)=klogto the base 2 exponent 2

	k=log2 ^n

TIME COMPLEXITY= O(log2^n)
*/