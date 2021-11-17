#include<bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/pairs-of-positive-negative-values-in-an-array/#:~:text=The%20idea%20is%20to%20use,value%20of%20the%20stored%20element
class Solution{
public:

    void printPairs(int arr[], int n){
        vector<int> v;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(abs(arr[i] == abs(arr[j])))
                    v.push_back(arr[i]);
            }
        }
        if(v.size()==0)
        return;
        sort(v.begin(), v.end());
        for(int i=0; i<v.size(); i++){
            cout<<-v[i]<<" "<<v[i];
        }
    }
};

int main()
{
  Solution ss;
    int arr[] = { 4, 8, 9, -4, 1, -1, -8, -9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    ss.printPairs(arr, n);
    return 0;
}