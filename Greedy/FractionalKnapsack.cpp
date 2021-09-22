#include<bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/fractional-knapsack-problem/
// https://www.youtube.com/watch?v=F_DDzYnxO14
struct Item{
    int value;
    int weight;
};

class Solution
{  
   static bool comp(Item a, Item b){
       double aa=(double)a.value / (double)a.weight;
       double bb=(double)b.value / (double)b.weight;
       return aa>bb;
   }
   public:
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr+n, comp);
        
        int curWeight=0;
        double finalValue = 0.0;
        
        for(int i = 0; i < n; i++){
            if(curWeight + arr[i].weight <= W){
                curWeight += arr[i].weight;
                finalValue += arr[i].value;
            }
            else{
                int remain = W-curWeight;
                finalValue += (arr[i].value / (double)arr[i].weight) * (double)remain;
                break;
            }
        }
        return finalValue;
    }        
};

int main(){
    int W = 50; 
    Item arr[] = { { 60, 10 }, { 100, 20 }, { 120, 30 } };
    Solution ss;
    int n = sizeof(arr) / sizeof(arr[0]);
     cout << "Maximum value we can obtain = "<< ss.fractionalKnapsack(W, arr, n);
    return 0;
}