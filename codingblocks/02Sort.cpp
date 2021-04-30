#include<iostream>
#include<algorithm> 
using namespace std;

bool comparefunc(int a, int b)
{   cout<<"Compare "<<a<<" and "<<b<<endl;
        // the printing of above statement shows that this function gets
        // calls everytime & checks if a>b.
    return a>b;
}

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);

    // sort(arr,arr+n);
    sort(arr,arr+n,comparefunc);

    for(int i=0;i<n;i++)
    cout <<arr[i]<<"\t";
return 0;
}