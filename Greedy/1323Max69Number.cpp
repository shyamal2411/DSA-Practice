#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/maximum-69-number/
class Solution {
public:
    int maximum69Number (int num) {
        //we can't loop on a number, so converting it to string to work on it
        string n=to_string(num);
            for(auto &c: n){ //o(n)
                if(c=='6'){
                    c='9';
            break;}
            }
        return stoi(n); //stoi converts string to number        
    //     for(int i=0;i<num.size();i++){
    //         if(num[i]=='6')
    //             num[i]=9;
    //             break;
    //     }
    // return num;
    }
};

int main()
{
    int num;
    cin>>num;
    cout<<Solution().maximum69Number(num)<<endl;
    return 0;
}