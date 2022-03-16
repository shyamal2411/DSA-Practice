#include<bits/stdc++.h> 
using namespace std;

// 16/03/2022
// https://leetcode.com/problems/validate-stack-sequences/
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
       int i=0, j=0;
        stack<int> s;
        for(i = 0; i < pushed.size(); i++){
            s.push(pushed[i]);
            while(!s.empty() && s.top() == popped[j]){
                s.pop(); j++;
            }
        }
        return s.empty();
    }
};


int main(){
    Solution ss;
    vector<int> pushed = {1,2,3,4,5};
    vector<int> popped = {4,5,3,2,1};
    cout<<ss.validateStackSequences(pushed, popped);
    return 0;
}