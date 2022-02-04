#include<bits/stdc++.h> 
using namespace std;


void frequency(vector<int> nums, int n){
    map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[nums[i]]++;
    }
    for(auto it: freq)
    cout<<it.first<<" "<<it.second<<endl;

}

int main(){
   vector<int> nums;
   int n; cin>>n;
    for(int i=0;i<n;i++)
    {
    int a; cin>>a;
    nums.push_back(a);
    }
    frequency(nums, n);
}