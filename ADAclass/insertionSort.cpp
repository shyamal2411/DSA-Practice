#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define print(arr,n) for(int i=0;i<n;i++)cout<<arr[i]<<" ";

void insertionSort(vi &v, int n)
{
    int val;
    for(int i=1;i<n;i++){
        val=v[i];
        int j=i-1; //j starts from i-1th element

    while(v[j]>val && j>=0)
    {
        v[j+1]=v[j];
        j--;
    }
    v[j+1]=val;
    }
}


int main(){
int n;
cin>>n;
vi  v(n);
read(v,n);

insertionSort(v,n);
print(v,n);
return 0;
}