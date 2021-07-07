#include<bits/stdc++.h> 
using namespace std;

#define int long long 
#define nl "\n"
const int M=1e9+7;
typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<
#define first fr
#define second sc

void remove(int arr[], int n)
{
    unordered_map<int, bool> mp;
    f(i,0,n){
        if(mp.find(arr[i])==mp.end()){
            out arr[i]<<" ";
        }
        mp[arr[i]] = true;
    }
} 

int32_t main() {
  int n;
  in n;
  int arr[n];
  read(arr, n);

  remove(arr, n);

  return 0;
}