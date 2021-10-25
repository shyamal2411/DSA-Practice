#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/plus-one/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        int sum, rem, i;
            for(i=digits.size()-1; i>=0; i--){
                if(carry==0)
                    break;
                else{
                    sum = digits[i] + carry;
                    rem = sum%10;
                    carry = sum/10;
                    digits[i] = rem;
                }
            }
        if(carry!=0)
            digits.insert(digits.begin(), carry);
        
        return digits;
    }
    vector<int> plusOne2(vector<int> &digits){
        int n=digits.size()-1;
        while(n>=0){
            if(digits[n]==9)
            digits[n]=0;
            else{
                digits[n]+=1;
                return digits;
            }
            n--;
        } 
        digits.insert(digits.begin(),1);
        return digits;
    }
};

int main(){
    Solution ss;
    vector<int> digits={1,2,3};

    return 0;
}