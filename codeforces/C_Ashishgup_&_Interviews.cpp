#include<bits/stdc++.h> 
using namespace std;

#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll int n,k,t,i,p,q,r,s,count=0,flag=0,j;
    cin >> t;
    while (t--) {
      cin >> n >> k;
      ll int arr[n], subtract1 = 0;

      fo(i, n) {
        cin >> arr[i];
        if (arr[i] == -1) {
          subtract1++;
        }
      }
      if (n / 2 < subtract1) {
        cout << "Rejected" << endl;
        continue;
      }

      ll int slow = 0;
      set<ll int> s;

      flag = 0;
      fo(i, n) {
        if (arr[i] > k) {
          flag = 1;
          break;
        }
      }
      if (flag) {
        cout << "Too Slow" << endl;
        continue;
      }

      ll int flag2 = 0;
      fo(i, n) {
        if (arr[i] < 0 || arr[i] > 1) {
          flag2 = 1;
          break;
        }
      }
      if (!flag2) {
        cout << "Bot" << endl;
        continue;
      }
      cout << "Accepted" << endl;
    }
return 0;
}