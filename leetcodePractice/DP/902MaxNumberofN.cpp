#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/numbers-at-most-n-given-digit-set/
class Solution {
public:
    #define ll long long
    int atMostNGivenDigitSet(vector<string>& digits, int n) {
        ll ans=0,len=digits.size();
        
        //convert given number to string
        string str=to_string(n);
        int size=str.size();
        
        // 1st we will count the possible numbers formed having length(no. of digits) less than len(max)
        //i.e. for e.g. n=1435 and digits ["1","3","5"]
        //   countof_1digitNumber(1,3,5)+countof_2digitNumber(11,13,15,....)+countof_3digitNumber(111,113,115,...)
        //   3^1 + 3^2 + 3^3 = 39
		
        for(int i=1;i<=size-1;i++){
            ans+=(pow(len,i));
        }
        
        //now we have to count number of 4digitsNumbers till n i.e. 1435
        // 11XX + 13XX = (3*3) + (3*3) = 18 
        ll i=0,j=0;
        while(i<size){
            j=0;
            while(j<len && digits[j][0]<str[i]){
                ans+=pow(len,size-1-i);
                j++;
            }
            if(j==len or digits[j][0]>str[i])
                return ans;
            i++;
        }
        ans++;
        
        // ans = 39+18 = 57
        return ans;
    }
};

int main(){
    Solution s;
    vector<string> v{"1","3","5"};
    cout<<s.atMostNGivenDigitSet(v,1435)<<endl;
    return 0;
}