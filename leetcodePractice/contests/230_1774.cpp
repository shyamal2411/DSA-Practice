#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int closestCost(vector<int>& baseCosts, vector<int>& toppingCosts, int target) {
      
        int n=baseCosts.size();
        int ans;
        for(int i=0;i<n;i++){
            int temp=(solve(toppingCosts, target-baseCosts[i], 0));
            if(abs(temp)<abs(ans) || (abs(temp)==abs(ans) && temp>ans))
                ans=temp;
        }
        return target-ans;
    }
    int solve(vector<int> &top, int target, int ind){
        if(ind==top.size())
            return target;
        
        //choose some maximum
        int ans=1e+4;
        
        //not choosing any toppings
        ans=min(ans, solve(top, target, ind+1));
        
        //choose 1 topping
        if(target>0){
            int temp=solve(top, target-top[ind], ind+1);
            if(abs(temp)<abs(ans) || (abs(temp)==abs(ans) && temp>ans))
                ans=temp;
        }
        //choosing 2 toppings
        if(target>0)
        {
            int temp=solve(top, target-2*top[ind], ind+1);
            if(abs(temp)<abs(ans) || (abs(temp)==abs(ans) && temp>ans))
                ans=temp;
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> baseCosts={1,2,3,4,5};
    vector<int> toppingCosts={1,2,3,4,5};
    int target=5;
    cout<<s.closestCost(baseCosts, toppingCosts, target)<<endl;
    return 0;
}