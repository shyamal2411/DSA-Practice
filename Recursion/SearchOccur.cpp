#include<bits/stdc++.h> 
#include<string>
#include<algorithm>
using namespace std;

int firstOccur(int arr[],int n,int i,int key)
{
    if(arr[i]==key)
    return i;

if(i==n)
    return -1;

    return firstOccur(arr,n,i+1,key);
}

int lastOccur(int arr[],int n,int i,int key)
{
    int restArray=lastOccur(arr,n,i+1,key);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}
int main(){
    int arr[]={4,5,6,7,8,9};
    cout<<firstOccur(arr,7,0,9)<<endl;
    return 0;
}