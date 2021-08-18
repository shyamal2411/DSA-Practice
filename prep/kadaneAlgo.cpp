#include<bits/stdc++.h> 
using namespace std;

// https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];

int kadaneAlgo(int arr[], int n) {
int maxSoFar = 0, maxEndingHere = 0;
for(int i = 0; i < n; i++) {
    maxEndingHere += arr[i];
    if(maxSoFar<maxEndingHere)
    maxSoFar = maxEndingHere;
    if(maxEndingHere < 0)
    maxEndingHere = 0;
}
    return maxSoFar;

}
int main(){
int a[]={-2, -3, 4, -1, -2, 1, 5, -3};
int n = sizeof(a)/sizeof(a[0]);
read(a,n);
int maxSum=kadaneAlgo(a,n);
    cout<<maxSum<<endl;
return 0;
}