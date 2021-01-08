// @ arr[n] = {1,2,3,-9,-6,4,5,-1,4};
// my ans : 12;
// comp's ans : 9;
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

	int n; 
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
		cin>> arr[i];

	int currSum = 0;
	int maxSum = 0;
	for(int i=0; i<n; i++) {
		currSum += arr[i];

		if(currSum < 0)
			currSum =0;

	maxSum = max(currSum, maxSum);
	}

	cout << maxSum;
	return 0;
}