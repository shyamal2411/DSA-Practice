#include <bits/stdc++.h>
using namespace std;

// https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1
struct Item{
    int value;
    int weight;
};

    bool compare(Item a, Item b){
        double r = (double) a.value / (double) a.weight;
        double w = (double) b.value / (double) b.weight;
        return r>w;
    }

class Solution
{

    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr+n, compare);
        int curweight = 0;
        double finalValue = 0.0;
        for(int i = 0;i < n; i++){
            if(curweight + arr[i].weight <= W)
            {
                curweight += arr[i].weight;
                finalValue += arr[i].value;
            }
            else{
                int remain = W - curweight;
                finalValue += (arr[i].value/(double)arr[i].weight) * (double)remain;
                break;
            }
        }
        return finalValue;
    }
        
};


int main()
{
	int t;
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
		int n, W;
		cin>>n>>W;		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
} 