#include<bits/stdc++.h> 
using namespace std;

// https://www.geeksforgeeks.org/find-a-triplet-that-sum-to-a-given-value/
typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];

bool findNumbers(int arr[], int n,int target){
int l, r;
sort(arr, arr+n);
for(int i=0;i<n-2;i++){
    l=i+1;
    r=n-1;
    while(l<r){
        int sum=arr[i]+arr[l]+arr[r];
        if(sum==target){
            cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r]<<endl;
            return true;
        }else if(sum<target){l++;}
        else{r--;}
    }
   }
   return false;
}

int main(){
int n,target; cin>>n>>target;
int arr[n];
read(arr,n);

findNumbers(arr,n,target);
return 0;
}