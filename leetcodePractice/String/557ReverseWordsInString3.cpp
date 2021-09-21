#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        for(int j=0;j<s.size();j++){
            if(s[j]==' ')
            {
                reverse(s.begin()+i, s.begin()+j);
                i=j+1;
            }
        }
        reverse(s.begin()+i, s.end());
        return s;
    }
};

int main(){
    Solution s;
    string str = "the sky is blue";
    cout<<s.reverseWords(str)<<endl;
    return 0;
}