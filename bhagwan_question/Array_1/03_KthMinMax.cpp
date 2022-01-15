#include<bits/stdc++.h> 
using namespace std;

// Love babbar sheet-1
// 15/01/22
// Reverse array
// https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
#define int long long 
#define nl "\n"
const int M=1e5 + 5;
typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(0);cout.tie(0);
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<
#define first fr
#define second sc

void printt(vector<int> &arr, int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void solve(){
 int size;
 cin>>size;
 int k; cin>>k;
    vector<int> arr(size);
    read(arr, size);
    sort(arr.begin(), arr.end());
    printt(arr, size);
    cout<<arr[k]<<" "<<arr[size-k-1]<<endl;
}

int32_t main(){
    FIO int t; t=1;
    //in t;
    while(t--) solve();
  
return 0;
}