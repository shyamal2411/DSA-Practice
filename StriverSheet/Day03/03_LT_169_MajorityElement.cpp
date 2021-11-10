#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/majority-element
void findMajority(int arr[], int n){
    int maxCount = 0;
    int index = -1;
    for(int i = 0; i< n; i++){
        int count=0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j])
            count++;
        }
        if(count > maxCount){
            maxCount = count;
            index =i;
        }
    }
    //TIME : O(n*n)
    //Space : O(1)
    if(maxCount > n/2)
    cout<<arr[index]  <<endl;
    else 
    cout<<"not found \n";
}

int majorityElement(vector<int> & nums){
    int count=0;
    int candidate=0;

    for(int n:nums){
        if(count==0)
        candidate=n;
    if(n==candidate)
    count++;
    else
    count--;
    }
    return candidate;
}

int main(){

    int arr[] = { 1, 1, 2, 1, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> nums={1, 1, 2, 1, 3, 5, 1};
    cout<<majorityElement(nums)<<endl;
    findMajority(arr, n);
    return 0;
}