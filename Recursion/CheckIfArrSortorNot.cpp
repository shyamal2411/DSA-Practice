#include<bits/stdc++.h>
using namespace std;

//Check if given Array is sorted or not.
bool sorted(int arr[],int n)
{
    if(n==1){
        return true;
    }

    bool restarr= sorted(arr+1,n-1);
   return (arr[0]<arr[1] &&restarr);
   
}
int main()
{
    int arr[]={1,2,6,4,5};
    cout<<sorted(arr,5)<<endl;
    return 0;
}