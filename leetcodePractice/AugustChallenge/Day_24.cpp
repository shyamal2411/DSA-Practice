#include<bits/stdc++.h>
using namespace std;


// https://leetcode.com/problems/complex-number-multiplication/discuss/1423419/C%2B%2B-Two-Simple-and-Short-Solutions-0ms-Faster-than-100
class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        complex<int> a=parse(num1), b=parse(num2);
        complex<int> ans=a*b;
        
        return to_string(real(ans))+ "+" + to_string(imag(ans)) + "i"; //it's imag, not image
    }
    
    complex<int> parse(string num)
    {
        int i=num.find('+');
        int real=stoi(num.substr(0,i));
        int imaginary =stoi(num.substr(i+1, num.size()-i-2));
        complex<int> ans(real, imaginary);
        return ans;
    }
};

int main()
{
    Solution ss;
    cout<<ss.complexNumberMultiply("1+1i","1+1i")<<endl;
    cout<<ss.complexNumberMultiply("1+-1i","1+-1i")<<endl;
    cout<<ss.complexNumberMultiply("1+-1i","1+1i")<<endl;
    cout<<ss.complexNumberMultiply("1+1i","1+-1i")<<endl;
    return 0;
}