#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solution(int arr[], int n){
    vector<int> sum;
    for(int i = 0; i < n; i++){
        vector<int> path;
        int j = i;
        int tempsum = 0;
        while(arr[j] < n && arr[j]!= i && arr[j]!=-1 && find(path.begin(), path.end(), j) == path.end()){
            path.push_back(j);
            tempsum += arr[j];
            j = arr[j];
            if(arr[j] == i){
                tempsum +=j;
                break;
            }
        }
        if(j < n && i == arr[j])
            sum.push_back(tempsum);
    }
    if(sum.empty())
        return -1;
    return *max_element(sum.begin(), sum.end());
}
int main(){
    int test;
    cin>>test;
    for(int loop = 0; loop < test; loop++){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        cout<<solution(arr, n)<<endl;
    }
    return 0;
}