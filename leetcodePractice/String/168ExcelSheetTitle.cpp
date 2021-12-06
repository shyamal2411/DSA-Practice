#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/excel-sheet-column-title/
class Solution {
public:
    string convertToTitle(int columnNumber) {
       string ans;
        char temp;
        while(columnNumber){
         columnNumber  -= 1;
        temp = 'A' + columnNumber % 26;
        ans = temp + ans;
        columnNumber /= 26;        
        }
        return ans;
    }
};

int main(){
    Solution s;
    cout<<s.convertToTitle(701);
    return 0;
}