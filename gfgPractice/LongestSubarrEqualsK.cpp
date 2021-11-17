#include<bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/longest-sub-array-sum-k/
class Solution{
public:
int lengthofSubarr(int arr[], int n, int k){
    unordered_map<int, int> mp;
    int sum=0,maxLen=0;

    for(int i = 0;i<n;i++){
        sum+=arr[i];
        if(sum==k)
        maxLen=i+1;

        if(mp.find(sum)==mp.end())
        mp[sum]=i;

        if(mp.find(sum-k)!=mp.end()){
            if(maxLen<i-mp[sum-k])
            maxLen=i-mp[sum-k];
        }
    }
    return maxLen;
}
};

int main(){
    Solution ss;
    int arr[]={10, 5, 2, 7, 1, 9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=15;
    cout<<ss.lengthofSubarr(arr,n,k);
    return 0;
}