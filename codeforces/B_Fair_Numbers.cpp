#include<bits/stdc++.h> 
using namespace std;

#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll int m,n,k,t,i,p,q,r,s,count=0,j;

    cin >> t;
    while (t--) {
      cin >> n;
      ll int arr[20];
      k = n;
      j = n;

      while (true) {
        i = 0;
        count = 0;
        k = j;
        while (k != 0) {
          arr[i] = k % 10;
          k /= 10;
          i++;
        }
        fo(r, i) {
          if (arr[r] == 0) {
            count++;
          }
          if (arr[r] != 0) {
            if (j % arr[r] == 0) {
              count++;
            }
          }
        }
        if (count == i) {
          cout << j << endl;
          break;
        }
        j++;
      }
    }
return 0;
}
