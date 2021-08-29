#include<bits/stdc++.h> 
using namespace std;

#define int long long 
#define nl endl
const int M=1e9+7;
typedef vector<int> vi;
#define pi pair<int,int>
#define yes cout<<'YES'<<endl;
#define no cout<<'NO'<<endl;
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(0);cout.tie(0);
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<
#define first fr
#define second sc

void bubblesort(vector<int>& nums){
    for(int i=nums.size()-1;i>=0;i--)
    {
        for(int j=0;i<i;j++)
        {
            if(nums[j]>nums[j+1])
            swap(nums[j],nums[j+1]);
        }
    }
}

void insertionSort(vector<int>& nums)
{
    if(nums.size()==0 || nums.size()==1)
    return;

    f(i,1,nums.size())
    {
        int temp=nums[i];
        int j=i-1;
        while(j>=0 && nums[j]>temp)
        {
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=temp;
    }
}

void merge(vi& nums, int l, int m, int r)
{
    vi temp(r-l+1);
    int i=l; //index for left subarray
    int j=m+1;//for right subarray
    int k=0;//for temporary array

    while(i<=m && j<=r)
    {
        if(nums[i]<=nums[j])
        temp[k++]=nums[i++];

        else
        temp[k++]=nums[j++];
    }
    while(i<=m)
    temp[k++]=nums[i++];
    while(j<=r)
    temp[k++]=nums[j++];
for(i=0;i<k;i++)
nums[l+i]=temp[i];
}

void mergeSort(vi& nums,int l,int r)
{
    if(l>=r)
    return;
    int m=l+(r-l)/2;//middle index, same as (l+r)
    mergeSort(nums,l,m);
    mergeSort(nums,m+1,r);
    merge(nums,l,m,r);
}

void quickSort(vector<int>& nums, int l, int r) {
  if (l >= r)
    return;
  int i = l;  // cursor for final pivot location
  for (int j = l; j <= r - 1; j++) {  // nums[r] is chosen as the pivot
    if (nums[j] <= nums[r]) {
      swap(nums[i], nums[j]);
      i++;  // smaller or equal elements go to the left of i
    }
  }
  swap(nums[i], nums[r]);  // after swap, the pivot is nums[i]
  quickSort(nums, l, i - 1);
  quickSort(nums, i + 1, r);
}

void solve(){
int n,k,i,p,q,r,count=0,j,flag,ans=0;
 vi nums;
 read(nums,5);
 bubblesort(nums);

}


int32_t main(){
    FIO int t; t=1;
    //in t;
    while(t--) {solve();}
  
return 0;
}