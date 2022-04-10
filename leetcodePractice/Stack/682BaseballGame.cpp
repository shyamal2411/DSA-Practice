#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/baseball-game/
class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> vec;
        int j = -1;
        
        for(int i = 0; i < ops.size(); i++){
            if(ops[i] == "+"){
                vec.push_back(vec[j] + vec[j-1]);
                j++;
            }
            else if(ops[i] == "D"){
                vec.push_back(2*vec[j]);
                j++;
            }
            else if(ops[i] == "C"){
                vec.pop_back();
                j--;
            }
            else{
                vec.push_back(stoi(ops[i]));
                j++;
            }
        }
        return accumulate(vec.begin(), vec.end(), 0);
    }
};

int main(){
    Solution s;
    vector<string> ops = {"5","-2","4","C","D","9","+","+"};
    cout<<s.calPoints(ops)<<endl;
    return 0;
}