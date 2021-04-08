#include<bits/stdc++.h> 
using namespace std;
//LEARNT FROM GFG, MY LOGIC WAS ALMOST THERE.
#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)


void Find(int arr[], int n, int x) {
  int first = -1, last = -1;
  for (int i = 0; i < n; i++) {
    if (x != arr[i])
      continue;
    if (first == -1)
      first = i;
    last = i;
  }
  if (first != -1)
    cout << "First Occurrence = " << first << "\nLast Occurrence = " << last;
  else
    cout << "Not Found";
}

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll int n,k,t,i,p,q,r,s,count=0,j;
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8};
    int n = sizeof(arr) / sizeof(int);  //another way to count elements in array.
    int x = 8;
    Find(arr, n, x);
    return 0;
}

/*
// Function for finding first and last occurrence of an elements
void Find(int arr[], int n, int x)
{
        int first = -1, last = -1;
        for (int i = 0; i < n; i++) {
                if (x != arr[i])
                        continue;
                if (first == -1)
                        first = i;
                last = i;
        }
        if (first != -1)
                cout << "First Occurrence = " << first
                        << "nLast Occurrence = " << last;
        else
                cout << "Not Found";
}

// Driver code
int main()
{
        int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
        int n = sizeof(arr) / sizeof(int);
        int x = 8;
        Find(arr, n, x);
        return 0;
}

*/