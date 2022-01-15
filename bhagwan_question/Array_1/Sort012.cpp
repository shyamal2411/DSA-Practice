#include<bits/stdc++.h> 
using namespace std;

// Love babbar sheet-1
// 15/01/22
// Min max in arr
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

// void printt(vector<int> &arr, int size){
//     for(int i = 0; i < size; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void minn(vector<int> &arr, int size){
//     int minEle = arr[0];
//     for(int i = 0; i < size; i++){
//         if(arr[i] < minEle)
//         minEle = arr[i];
//     }
//     cout<<"Min element: "<<minEle<<endl; 
// }

// void maxx(vector<int> &arr, int size){
//     int maxEle = arr[0];
//     for(int i = 0; i < size; i++){
//         if(arr[i] > maxEle)
//         maxEle= arr[i];
//     }
//     cout<<"Max element: "<<maxEle<<endl; 
// }

    void sortColors() {
        vector<int> nums={2,0,2,1,1,0};
    //DUTCH NATIONAL FLAG ALGORITHM
        int low=0, high=nums.size()-1, mid=0;
        
        while(mid<=high){
            switch(nums[mid]){
                    
                    //element 0
                case 0:
                    swap(nums[low++], nums[mid++]);
                    break;
                    
                    //element 1
                case 1:
                    mid++;
                    break;
                    
                    //element 2
                case 2:
                    swap(nums[mid], nums[high--]);
                    break;
            }
        }
    }


int32_t main(){
    FIO int t; t=1;
    //in t;
    while(t--) sortColors();
  
return 0;
}