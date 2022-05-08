#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/contest/weekly-contest-292/problems/largest-3-same-digit-number-in-string/
class Solution {
public:
    string largestGoodInteger(string num) {
        // taking a char with 0 initially that will store our ans
        char ans = 0;
        
        // just iterating from the 3rd element and start comparing with 1st and 2nd element
        for(int i=2; i<num.size(); i++)
        {
            // if we found triplet then just update the max if it is
            if(num[i-2] == num[i-1] && num[i-1] == num[i])
                ans = max(ans, num[i]);
        }
        
        // after all the iteration if our ans is empty (means no triplet) then return empty string
        if(ans==0)
            return "";
        
        // else return the max char in the form of string
        // string(3,ans) == just returning the same char 3 times in the form of string
        else
            return string(3,ans);
    }
};

int main(){
    Solution ss;
    string s = "6777133339";
    cout<<ss.largestGoodInteger(s)<<endl;
    return 0;
}