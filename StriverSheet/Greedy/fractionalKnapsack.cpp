#include<bits/stdc++.h> 
using namespace std;

struct Item{ 
    int value, weight;
};

class Solution{
public:

        bool static compare(Item a, Item b){
            double r = (double) a.value / (double) a.weight;
            double s = (double) b.value / (double) b.weight;
            return r > s;
        }

        double fractionalKnapsack(int w, Item arr[], int n){
            // sort(arr.begin(), arr.end(), compare);
            sort(arr, arr+n, compare);

            int currWeight = 0;
            double finalVal = 0.0;

            for(int i = 0; i < n; i++){
                if(currWeight + arr[i].weight <= w){
                    currWeight += arr[i].weight;
                    finalVal += arr[i].value;
                } 
                else{
                    int remain = w - currWeight;
                    finalVal += arr[i].value / (double) arr[i].weight * remain;
                    break;
                }
            }
            return finalVal;            
        }
};

int main(){
    Solution ss;
    int w = 50;
    Item arr[] = {{60, 10}, {100, 20}, {120, 30}};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<ss.fractionalKnapsack(w, arr, n);
    return 0;
}