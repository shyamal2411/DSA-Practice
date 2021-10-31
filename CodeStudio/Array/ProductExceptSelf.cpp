#include<bits/stdc++.h>
using namespace std;

// https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118820/offering/1381866?leftPanelTab=0
int *getProductArrayExceptSelf(int *arr, int n)
{
      long long int s1=1,mo=1e9+7;
       int *a = new int[n];
       a[0]=arr[0];

   for(int i=1;i<n;i++)
       a[i]=a[i-1]*arr[i];

   for(int i=n-1;i>0;i--)
   {  
       a[i]=a[i-1]*s1;  
       s1=s1*arr[i];
   }
   a[0]=s1;
   return a;
}

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int *a = getProductArrayExceptSelf(arr,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}