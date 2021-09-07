#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0, ten=0;
        for(int i: bills){
            if(i==5)
                five++;
            else if(i==10){
                if(five ==0) return false;
                five --;
                ten ++;
            }
            else{
                if(five>0 && ten>0){
                    five--;
                    ten--;
                }else if(five>=3){
                five-=3;
                }else {return false;}
            }
        }
        return true;
    }
};
// Time: O(n)
// Space: O(1)

int main(){
    Solution ss;
    vector<int> bills={5,5,5,10,20};
    cout<<ss.lemonadeChange(bills)<<endl;
    return 0;
}
/*
Initially, we start with no five dollar bills, and no ten dollar bills.
If a customer brings a ＄5 bill, then we take it.
If a customer brings a ＄10 bill, we must return a five dollar bill. 
If we don't have a five dollar bill, the answer is False, since we can't make correct change.
If a customer brings a ＄20 bill, we must return ＄15.
If we have a ＄10 and a ＄5, then we always prefer giving change in that, because it is strictly worse for making change than three ＄5 bills.
Otherwise, if we have three ＄5 bills, then we'll give that.
Otherwise, we won't be able to give ＄15 in change, and the answer is False.
*/