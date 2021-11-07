#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/multiply-strings/
// https://youtu.be/HhwZ1O6TNLE
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0")
            return "0";
        
        vector<int> num(num1.size() + num2.size(), 0);
        //max number of digits in ans = num1.size() + num2.size().
        
        for(int i=num1.size()-1;i>=0;i--){
            for(int j=num2.size()-1;j>=0;j--){
                num[i+j+1] += (num1[i]-'0') * (num2[j]-'0'); //why +1? because index is starting from 0
                num[i+j] += num[i+j+1] /10; //carry part of the answer
                num[i+j+1]%=10; //reminder
            }
        }
        //skip the leading 0s
        int i=0;
        while(i<num.size() && num[i]==0)
            i++;
        //transform the vector to string
        string ans="";
        while(i<num.size()) 
            ans.push_back(num[i++]+'0');
        
        return ans;        
    }
};

int main(){
    Solution s;
    string num1 = "123";
    string num2 = "456";
    cout<<s.multiply(num1, num2)<<endl;
    return 0;
}