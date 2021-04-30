#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

void rotatearr(int arr[], int n, int k) {
  int mod = k % n;  //*lets take length of array as 5,Why k%n, bcoz if I want to
                    //*rotate the array 6 times, the position of elements will
                    //*be same as the position after 1 rotation.
                    //*if i want to rotate it 101 times, the position of
                    //* elements will be same as after rotating it 1 time, *take
                    //* k=6,so, mod=6%5; it will be 1 so position of elements
                    //* after rotation 1 and rotation 6 wil be same,
  //*then why to rotate 6 times??? Rotate it 1 time,simple.*/
  fo(i, n) cout << (arr[(mod + i) % n]) << " ";  //*arr[1+1]%5==2,
  //*this means that whichever be the element,the same element will get
  //* printed,except for the n==i*/
  cout << "\n";
}

int main() {
  ll int n, k, t, i, p, q, r, s, count = 0, j;
  cin >> n;
  int arr[n];

  fo(i, n) cin >> arr[i];

  // cout<<"\nEnter k: ";
  cin >> k;
  rotatearr(arr, n, k);

  cin >> k;
  rotatearr(arr, n, k);

  cin >> k;
  rotatearr(arr, n, k);
}