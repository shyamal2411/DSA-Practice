#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    string convert(int n){
        string ret="";
        while(n){
            ret+=(n%2)+'0';
            n>>=1;
        }
        return ret;
    }
    
    int findIntegers(int n) {
       string  bits=convert(n); 
        int nums=bits.size();
        vector<int> ones(nums), zeroes(nums);
        ones[0]=zeroes[0]=1;
        
        for(int i=1;i<nums;i++){
            zeroes[i]=zeroes[i-1]+ones[i-1];
            ones[i]=zeroes[i-1];
        }
        int ret=ones[nums-1]+zeroes[nums-1];
        for(int i=nums-2;i>=0;i--){
            if(bits[i]=='0' && bits[i+1]=='0')
                ret-=ones[i];
            else if(bits[i]=='1' && bits[i+1]=='1')
                break;
        }
        return ret;
    }
};

int main()
{
    Solution obj;
    int n;
    cin>>n;
    cout<<obj.findIntegers(n);
    return 0;
}