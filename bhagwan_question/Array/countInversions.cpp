#include<bits/stdc++.h> 
using namespace std;

int InvCount(int arr[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(arr[j]>arr[i])
             count++; 
        }
    }
    return count;
}

int main() {
//   int arr[] = {8,4,2,1};
  int arr[] = {3,1,2};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << InvCount(arr, n);
  return 0;
}