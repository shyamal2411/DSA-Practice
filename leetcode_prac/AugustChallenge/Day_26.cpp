#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSerialization(string preorder) {
        int curr=1;
        string temp = "";
        preorder.push_back(',');
        vector<string> v;
        for(auto c:preorder){
            if(c==','){
            v.push_back(temp);
            temp.clear();
        } else
                temp.push_back(c);
      }
        for(auto str:v){
            curr--;
            if(curr<0)
                return false;
            if(str!="#")
                curr+=2;
        }
        return curr==0;
    }
};

//main function
int main(){
    Solution ss;
    string preorder = "9,3,4,#,#,1,#,#,2,#,6,#,#";
    cout<<ss.isValidSerialization(preorder)<<endl;
    return 0;
}