#include<bits/stdc++.h> 
using namespace std;

// #define int long long 
#define nl "\n"
const int M=1e9+7;
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

double avgHelp(int arr[], int i, int n){
    if(i==n-1)return arr[i];

    if(i==0)
    return ((arr[i]+avgHelp(arr, i+1, n))/n);

    return (arr[i]+avgHelp(arr, i+1, n));
}

double avg(int arr[],int n){
    return avgHelp(arr,0,n);
}

int main(){

    int n;
    int arr[n];
    read(arr, n);

    cout<<avg(arr, n)<<nl;
    return 0;
}