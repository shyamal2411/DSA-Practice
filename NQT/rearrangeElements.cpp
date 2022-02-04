#include<bits/stdc++.h> 
using namespace std;

int main(){
    vector<int> nums = {8,4,5,9,7,2,3,6};
    sort(nums.begin(), nums.end());
    int k = nums.size();
    int mid = k/2;
    for(int i = 0; i < k; i++)
        cout<<nums[i]<<" ";

    for(int i = k-1; i >= k/2; i--)
        cout<<nums[i]<<" ";
}