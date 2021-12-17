#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
  int n = mid - left + 1;
  int m = right - mid;

  int a[n];
  int b[m]; // temporary arrays

  for (int i = 0; i < n; i++)
  {
    a[i] = arr[left + i];
  }

  for (int i = 0; i < m; i++)
  {
    b[i] = arr[mid + left + i];
  }
  
  int i = 0, j = 0, k = left;
  while (i < n && j < m)
  {
    if (a[i] < b[j])
    {
      arr[k] = a[i];
      k++;
      i++;
    }
    else
    {
      arr[k] = b[j];
      k++;
      j++;
    }
  }
  while (i < n)
  {
    arr[k] = a[i];
    k++;
    i++;
  }
  while (i < m)
  {
    arr[k] = b[j];
    k++;
    j++;
  }
}

void mergesort(int arr[], int left, int right)
{
  if (left < right)
  {
    int mid = (left + right) / 2;
    mergesort(arr, left, mid);
    mergesort(arr, mid + 1, right);

    merge(arr, left, mid, right);
  }
}

int main()
{
  int arr[] = {5, 4, 3, 2, 1};
  mergesort(arr, 0, 4);
  for (int i = 0; i < 5; i++)
    cout << arr[i] << " ";

  cout << endl;
  return 0;
}

/*First of all divide the array into 2 equal halves
  Then recursively go on dividing the elements into 2 parts
  then sort those 2 elements mutually,
  doing this for both the 2 major halves,we get 2 sorted arrays
  afterwards go on comparing respective elements of both the halved arrays
  and add it to the one single array.
*/